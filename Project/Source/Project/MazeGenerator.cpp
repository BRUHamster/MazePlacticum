#include "MazeGenerator.h"

#include "Components/InstancedStaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Containers/Queue.h"

/*
 * Конструктор Actor'а.
 *
 * Здесь создаются компоненты:
 * - SceneRoot: корень объекта;
 * - FloorInstances: все плитки пола;
 * - WallInstances: все стены;
 * - MarkerInstances: старт и выход.
 */
AMazeGenerator::AMazeGenerator()
{
    PrimaryActorTick.bCanEverTick = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    FloorInstances = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("FloorInstances"));
    FloorInstances->SetupAttachment(SceneRoot);

    WallInstances = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("WallInstances"));
    WallInstances->SetupAttachment(SceneRoot);

    MarkerInstances = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("MarkerInstances"));
    MarkerInstances->SetupAttachment(SceneRoot);
}

/*
 * Вызывается при старте игры.
 *
 * Если bAutoGenerateOnConstruction = false,
 * то лабиринт не был создан в редакторе, поэтому создаём его при запуске.
 */
void AMazeGenerator::BeginPlay()
{
    Super::BeginPlay();

    if (!bAutoGenerateOnConstruction)
    {
        GenerateMaze();
    }
}

/*
 * Вызывается в редакторе при изменении параметров Actor'а.
 */
void AMazeGenerator::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    if (bAutoGenerateOnConstruction)
    {
        GenerateMaze();
    }
}

/*
 * Главная функция генерации.
 */
void AMazeGenerator::GenerateMaze()
{
    ClearMaze();
    InitGrid();

    FRandomStream RandomStream;
    RandomStream.Initialize(bUseRandomSeed ? FMath::Rand() : Seed);

    StartIndex = ChooseStartIndex(RandomStream);

    RunRecursiveBacktracking(RandomStream);

    if (ExtraConnectionsPercent > 0.0f)
    {
        AddExtraConnections(RandomStream);
    }

    ExitIndex = FindFarthestCellFromStart(StartIndex);

    if (bBuildGeometry)
    {
        BuildMazeGeometry();
    }

    if (bDrawDebug)
    {
        DrawDebugMaze();
    }

    UE_LOG(LogTemp, Warning, TEXT("DFS Maze generated: %d x %d, Seed=%d, Start=%d, Exit=%d"),
        Width, Height, Seed, StartIndex, ExitIndex);
}


void AMazeGenerator::ClearMaze()
{
    if (FloorInstances)
    {
        FloorInstances->ClearInstances();
    }

    if (WallInstances)
    {
        WallInstances->ClearInstances();
    }

    if (MarkerInstances)
    {
        MarkerInstances->ClearInstances();
    }

    Cells.Empty();
    StartIndex = INDEX_NONE;
    ExitIndex = INDEX_NONE;
}

/*
 * Создаёт прямоугольную сетку клеток.
 *
 * Все клетки изначально:
 * - не посещены;
 * - имеют все 4 стены.
 */
void AMazeGenerator::InitGrid()
{
    Width = FMath::Max(2, Width);
    Height = FMath::Max(2, Height);

    Cells.SetNum(Width * Height);

    for (int32 Y = 0; Y < Height; ++Y)
    {
        for (int32 X = 0; X < Width; ++X)
        {
            const int32 Index = GetIndex(X, Y);

            FMazeCell& Cell = Cells[Index];
            Cell.X = X;
            Cell.Y = Y;
            Cell.bVisited = false;

            Cell.bWallTop = true;
            Cell.bWallRight = true;
            Cell.bWallBottom = true;
            Cell.bWallLeft = true;
        }
    }
}

/*
 * Основной DFS / Recursive Backtracking.
 *
 * Используется стек:
 * - текущая клетка лежит на вершине стека;
 * - если есть непосещённые соседи, выбираем одного и идём туда;
 * - если соседей нет, удаляем текущую клетку из стека, то есть возвращаемся назад.
 *
 * Почему это DFS:
 * алгоритм старается идти как можно глубже по одному пути,
 * а назад возвращается только в тупике.
 */
void AMazeGenerator::RunRecursiveBacktracking(FRandomStream& RandomStream)
{
    if (!Cells.IsValidIndex(StartIndex))
    {
        return;
    }

    TArray<int32> Stack;

    Cells[StartIndex].bVisited = true;
    Stack.Push(StartIndex);

    while (Stack.Num() > 0)
    {
        const int32 CurrentIndex = Stack.Last();

        TArray<int32> Neighbors = GetUnvisitedNeighborsBiased(CurrentIndex, RandomStream);

        if (Neighbors.Num() > 0)
        {
            const int32 NeighborIndex = Neighbors[RandomStream.RandRange(0, Neighbors.Num() - 1)];

            // Убираем стену между текущей клеткой и выбранным соседом.
            RemoveWallBetween(CurrentIndex, NeighborIndex);

            // Сосед теперь посещён.
            Cells[NeighborIndex].bVisited = true;

            // Переходим глубже.
            Stack.Push(NeighborIndex);
        }
        else
        {
            // Непосещённых соседей нет — тупик.
            // Возвращаемся назад.
            Stack.Pop();
        }
    }
}

/*
 * Возвращает непосещённых соседей клетки.
 *
 * Дополнительно учитывает HorizontalBias:
 * - если HorizontalBias высокий, горизонтальные соседи чаще окажутся в начале списка;
 * - если низкий, чаще предпочтутся вертикальные.
 */
TArray<int32> AMazeGenerator::GetUnvisitedNeighborsBiased(int32 CellIndex, FRandomStream& RandomStream) const
{
    TArray<int32> Horizontal;
    TArray<int32> Vertical;

    if (!Cells.IsValidIndex(CellIndex))
    {
        return {};
    }

    const FMazeCell& Cell = Cells[CellIndex];

    const TArray<FIntPoint> Directions =
    {
        FIntPoint(0, -1), // вверх
        FIntPoint(1, 0),  // вправо
        FIntPoint(0, 1),  // вниз
        FIntPoint(-1, 0)  // влево
    };

    for (const FIntPoint& Dir : Directions)
    {
        const int32 NX = Cell.X + Dir.X;
        const int32 NY = Cell.Y + Dir.Y;

        if (!IsInside(NX, NY))
        {
            continue;
        }

        const int32 NeighborIndex = GetIndex(NX, NY);

        if (Cells.IsValidIndex(NeighborIndex) && !Cells[NeighborIndex].bVisited)
        {
            if (Dir.X != 0)
            {
                Horizontal.Add(NeighborIndex);
            }
            else
            {
                Vertical.Add(NeighborIndex);
            }
        }
    }

    TArray<int32> Result;

    const bool bPreferHorizontal = RandomStream.FRand() < HorizontalBias;

    if (bPreferHorizontal)
    {
        Result.Append(Horizontal);
        Result.Append(Vertical);
    }
    else
    {
        Result.Append(Vertical);
        Result.Append(Horizontal);
    }

    return Result;
}

/*
 * Удаляет стену между двумя соседними клетками.
*/
void AMazeGenerator::RemoveWallBetween(int32 AIndex, int32 BIndex)
{
    if (!Cells.IsValidIndex(AIndex) || !Cells.IsValidIndex(BIndex))
    {
        return;
    }

    FMazeCell& A = Cells[AIndex];
    FMazeCell& B = Cells[BIndex];

    const int32 DX = B.X - A.X;
    const int32 DY = B.Y - A.Y;

    if (DX == 1)
    {
        A.bWallRight = false;
        B.bWallLeft = false;
    }
    else if (DX == -1)
    {
        A.bWallLeft = false;
        B.bWallRight = false;
    }
    else if (DY == 1)
    {
        A.bWallBottom = false;
        B.bWallTop = false;
    }
    else if (DY == -1)
    {
        A.bWallTop = false;
        B.bWallBottom = false;
    }
}

/*
 * Проверяет, есть ли стена между двумя соседними клетками.
 */
bool AMazeGenerator::HasWallBetween(int32 AIndex, int32 BIndex) const
{
    if (!Cells.IsValidIndex(AIndex) || !Cells.IsValidIndex(BIndex))
    {
        return false;
    }

    const FMazeCell& A = Cells[AIndex];
    const FMazeCell& B = Cells[BIndex];

    const int32 DX = B.X - A.X;
    const int32 DY = B.Y - A.Y;

    if (DX == 1) return A.bWallRight && B.bWallLeft;
    if (DX == -1) return A.bWallLeft && B.bWallRight;
    if (DY == 1) return A.bWallBottom && B.bWallTop;
    if (DY == -1) return A.bWallTop && B.bWallBottom;

    return false;
}

/*
 * Модификация алгоритма.
 *
 * После обычного DFS часть стен дополнительно удаляется.
 * Это создает лабиринт с циклами и альтернативными маршрутами.
 */
void AMazeGenerator::AddExtraConnections(FRandomStream& RandomStream)
{
    const int32 Attempts = FMath::RoundToInt(Width * Height * ExtraConnectionsPercent);

    for (int32 I = 0; I < Attempts; ++I)
    {
        const int32 X = RandomStream.RandRange(0, Width - 1);
        const int32 Y = RandomStream.RandRange(0, Height - 1);
        const int32 AIndex = GetIndex(X, Y);

        TArray<int32> PossibleNeighbors;

        const TArray<FIntPoint> Directions =
        {
            FIntPoint(0, -1),
            FIntPoint(1, 0),
            FIntPoint(0, 1),
            FIntPoint(-1, 0)
        };

        for (const FIntPoint& Dir : Directions)
        {
            const int32 NX = X + Dir.X;
            const int32 NY = Y + Dir.Y;

            if (IsInside(NX, NY))
            {
                const int32 BIndex = GetIndex(NX, NY);

                if (HasWallBetween(AIndex, BIndex))
                {
                    PossibleNeighbors.Add(BIndex);
                }
            }
        }

        if (PossibleNeighbors.Num() > 0)
        {
            const int32 BIndex = PossibleNeighbors[RandomStream.RandRange(0, PossibleNeighbors.Num() - 1)];
            RemoveWallBetween(AIndex, BIndex);
        }
    }
}

/*
 * Выбирает стартовую клетку.
 */
int32 AMazeGenerator::ChooseStartIndex(FRandomStream& RandomStream) const
{
    switch (StartMode)
    {
    case EMazeStartMode::TopLeft:
        return GetIndex(0, 0);

    case EMazeStartMode::Center:
        return GetIndex(Width / 2, Height / 2);

    case EMazeStartMode::Random:
    default:
        return GetIndex(RandomStream.RandRange(0, Width - 1), RandomStream.RandRange(0, Height - 1));
    }
}

/*
 * Находит самую дальнюю клетку от старта.
 *
 * Используется BFS — поиск в ширину.
 */
int32 AMazeGenerator::FindFarthestCellFromStart(int32 InStartIndex) const
{
    if (!Cells.IsValidIndex(InStartIndex))
    {
        return INDEX_NONE;
    }

    TArray<int32> Distance;
    Distance.Init(-1, Cells.Num());

    TQueue<int32> Queue;
    Queue.Enqueue(InStartIndex);
    Distance[InStartIndex] = 0;

    int32 FarthestIndex = InStartIndex;

    while (!Queue.IsEmpty())
    {
        int32 CurrentIndex = INDEX_NONE;
        Queue.Dequeue(CurrentIndex);

        if (Distance[CurrentIndex] > Distance[FarthestIndex])
        {
            FarthestIndex = CurrentIndex;
        }

        const FMazeCell& Cell = Cells[CurrentIndex];

        struct FNeighborData
        {
            int32 X;
            int32 Y;
            bool bBlockedByWall;
        };

        const TArray<FNeighborData> Neighbors =
        {
            { Cell.X, Cell.Y - 1, Cell.bWallTop },
            { Cell.X + 1, Cell.Y, Cell.bWallRight },
            { Cell.X, Cell.Y + 1, Cell.bWallBottom },
            { Cell.X - 1, Cell.Y, Cell.bWallLeft }
        };

        for (const FNeighborData& Neighbor : Neighbors)
        {
            if (Neighbor.bBlockedByWall || !IsInside(Neighbor.X, Neighbor.Y))
            {
                continue;
            }

            const int32 NeighborIndex = GetIndex(Neighbor.X, Neighbor.Y);

            if (Distance[NeighborIndex] == -1)
            {
                Distance[NeighborIndex] = Distance[CurrentIndex] + 1;
                Queue.Enqueue(NeighborIndex);
            }
        }
    }

    return FarthestIndex;
}

/*
 * Общая функция построения визуала.
 */
void AMazeGenerator::BuildMazeGeometry()
{
    if (FloorInstances && FloorMesh)
    {
        FloorInstances->SetStaticMesh(FloorMesh);
    }

    if (WallInstances && WallMesh)
    {
        WallInstances->SetStaticMesh(WallMesh);
    }

    if (MarkerInstances && MarkerMesh)
    {
        MarkerInstances->SetStaticMesh(MarkerMesh);
    }

    BuildFloor();
    BuildWalls();
    BuildMarkers();
}

/*
 * Создаёт пол для каждой клетки.
 */
void AMazeGenerator::BuildFloor()
{
    if (!FloorInstances || !FloorInstances->GetStaticMesh())
    {
        return;
    }

    for (const FMazeCell& Cell : Cells)
    {
        const FVector Location = GetCellWorldLocation(Cell);
        const FTransform Transform(FRotator::ZeroRotator, Location, FloorScale);
        FloorInstances->AddInstance(Transform);
    }
}


void AMazeGenerator::BuildWalls()
{
    if (!WallInstances || !WallInstances->GetStaticMesh())
    {
        return;
    }

    const float Half = CellSize * 0.5f;
    const float WallZ = CellSize * 0.5f;

    for (const FMazeCell& Cell : Cells)
    {
        const FVector Center = GetCellWorldLocation(Cell);

        if (Cell.bWallTop)
        {
            AddWallInstance(Center + FVector(0.0f, -Half, WallZ), FRotator::ZeroRotator);
        }

        if (Cell.bWallLeft)
        {
            AddWallInstance(Center + FVector(-Half, 0.0f, WallZ), FRotator(0.0f, 90.0f, 0.0f));
        }

        if (Cell.X == Width - 1 && Cell.bWallRight)
        {
            AddWallInstance(Center + FVector(Half, 0.0f, WallZ), FRotator(0.0f, 90.0f, 0.0f));
        }

        if (Cell.Y == Height - 1 && Cell.bWallBottom)
        {
            AddWallInstance(Center + FVector(0.0f, Half, WallZ), FRotator::ZeroRotator);
        }
    }
}

/*
 * Создаёт маркеры старта и выхода.

 */
void AMazeGenerator::BuildMarkers()
{
    if (!MarkerInstances || !MarkerInstances->GetStaticMesh())
    {
        return;
    }

    if (Cells.IsValidIndex(StartIndex))
    {
        MarkerInstances->AddInstance(FTransform(
            FRotator::ZeroRotator,
            GetCellWorldLocation(Cells[StartIndex]) + FVector(0.0f, 0.0f, 80.0f),
            FVector(1.0f, 1.0f, 1.0f)
        ));
    }

    if (Cells.IsValidIndex(ExitIndex))
    {
        MarkerInstances->AddInstance(FTransform(
            FRotator::ZeroRotator,
            GetCellWorldLocation(Cells[ExitIndex]) + FVector(0.0f, 0.0f, 160.0f),
            FVector(1.4f, 1.4f, 1.4f)
        ));
    }
}

/*
 * Добавляет одну стену как instance.
 */
void AMazeGenerator::AddWallInstance(const FVector& Location, const FRotator& Rotation)
{
    if (!WallInstances)
    {
        return;
    }

    const FTransform Transform(Rotation, Location, WallScale);
    WallInstances->AddInstance(Transform);
}

/*
 * Debug-отрисовка лабиринта.
 *
 * Зелёные квадраты — клетки.
 * Красные линии — стены.
 * Синяя сфера — старт.
 * Жёлтая сфера — выход.
 */
void AMazeGenerator::DrawDebugMaze() const
{
    if (!GetWorld())
    {
        return;
    }

    const float Half = CellSize * 0.5f;
    const float Z = 30.0f;

    for (const FMazeCell& Cell : Cells)
    {
        const FVector Center = GetCellWorldLocation(Cell) + FVector(0.0f, 0.0f, Z);

        DrawDebugBox(
            GetWorld(),
            Center,
            FVector(CellSize * 0.42f, CellSize * 0.42f, 8.0f),
            FColor::Green,
            false,
            DebugLifeTime,
            0,
            2.0f
        );

        if (Cell.bWallTop)
        {
            DrawDebugLine(GetWorld(), Center + FVector(-Half, -Half, 20.0f), Center + FVector(Half, -Half, 20.0f), FColor::Red, false, DebugLifeTime, 0, 8.0f);
        }

        if (Cell.bWallRight)
        {
            DrawDebugLine(GetWorld(), Center + FVector(Half, -Half, 20.0f), Center + FVector(Half, Half, 20.0f), FColor::Red, false, DebugLifeTime, 0, 8.0f);
        }

        if (Cell.bWallBottom)
        {
            DrawDebugLine(GetWorld(), Center + FVector(-Half, Half, 20.0f), Center + FVector(Half, Half, 20.0f), FColor::Red, false, DebugLifeTime, 0, 8.0f);
        }

        if (Cell.bWallLeft)
        {
            DrawDebugLine(GetWorld(), Center + FVector(-Half, -Half, 20.0f), Center + FVector(-Half, Half, 20.0f), FColor::Red, false, DebugLifeTime, 0, 8.0f);
        }
    }

    if (Cells.IsValidIndex(StartIndex))
    {
        DrawDebugSphere(GetWorld(), GetCellWorldLocation(Cells[StartIndex]) + FVector(0.0f, 0.0f, 120.0f), 80.0f, 16, FColor::Blue, false, DebugLifeTime, 0, 5.0f);
        DrawDebugString(GetWorld(), GetCellWorldLocation(Cells[StartIndex]) + FVector(0.0f, 0.0f, 220.0f), TEXT("START"), nullptr, FColor::Blue, DebugLifeTime, true);
    }

    if (Cells.IsValidIndex(ExitIndex))
    {
        DrawDebugSphere(GetWorld(), GetCellWorldLocation(Cells[ExitIndex]) + FVector(0.0f, 0.0f, 120.0f), 80.0f, 16, FColor::Yellow, false, DebugLifeTime, 0, 5.0f);
        DrawDebugString(GetWorld(), GetCellWorldLocation(Cells[ExitIndex]) + FVector(0.0f, 0.0f, 220.0f), TEXT("EXIT"), nullptr, FColor::Yellow, DebugLifeTime, true);
    }
}

/*
 * Перевод координат клетки в индекс одномерного массива.
 */
int32 AMazeGenerator::GetIndex(int32 X, int32 Y) const
{
    return Y * Width + X;
}

/*
 * Проверка выхода за границы сетки.
 */
bool AMazeGenerator::IsInside(int32 X, int32 Y) const
{
    return X >= 0 && X < Width && Y >= 0 && Y < Height;
}

/*
 * Перевод клетки в позицию в мире Unreal.
 *
 * Actor может стоять не в нуле, поэтому добавляем GetActorLocation().
 */
FVector AMazeGenerator::GetCellWorldLocation(const FMazeCell& Cell) const
{
    return GetActorLocation() + FVector(Cell.X * CellSize, Cell.Y * CellSize, 0.0f);
}
