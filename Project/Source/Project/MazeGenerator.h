#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MazeGenerator.generated.h"

/*
 * Режим выбора стартовой клетки.
 */
UENUM(BlueprintType)
enum class EMazeStartMode : uint8
{
    Random UMETA(DisplayName = "Random"),
    TopLeft UMETA(DisplayName = "Top Left"),
    Center UMETA(DisplayName = "Center")
};

/*
 * Одна клетка лабиринта.
 *
 * Лабиринт хранится как сетка клеток.
 * У каждой клетки есть координаты X/Y, флаг посещения и 4 стены.
 *
 * В начале генерации все стены включены.
 * Алгоритм DFS постепенно "прорубает" стены между соседними клетками.
 */
USTRUCT(BlueprintType)
struct FMazeCell
{
    GENERATED_BODY()

    // Координата клетки в сетке по горизонтали.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 X = 0;

    // Координата клетки в сетке по вертикали.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Y = 0;

    // Была ли клетка посещена алгоритмом DFS.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bVisited = false;

    // Стена сверху.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bWallTop = true;

    // Стена справа.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bWallRight = true;

    // Стена снизу.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bWallBottom = true;

    // Стена слева.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bWallLeft = true;
};

/*
 * Главный Actor-генератор лабиринта.
 *
 * Его нужно поставить на уровень в Unreal Editor.
 * В Details Panel можно менять размеры, seed, debug-режим и модификации алгоритма.
 */
UCLASS()
class PROJECT_API AMazeGenerator : public AActor
{
    GENERATED_BODY()

public:
    AMazeGenerator();

    /*
     * Вызывается в редакторе, когда Actor меняет параметры или появляется на сцене.
     * Мы используем это для автогенерации лабиринта прямо в редакторе.
     */
    virtual void OnConstruction(const FTransform& Transform) override;

    /*
     * Вызывается при запуске игры.
     * Если автогенерация в редакторе выключена, можно генерировать лабиринт здесь.
     */
    virtual void BeginPlay() override;

    /*
     * Основная публичная функция генерации.
     * Её можно вызвать из Blueprint или из Details Panel, потому что есть CallInEditor.
     */
    UFUNCTION(BlueprintCallable, CallInEditor, Category="Maze")
    void GenerateMaze();

    /*
     * Очистка уже построенного лабиринта:
     * удаляются все instances пола, стен и маркеров.
     */
    UFUNCTION(BlueprintCallable, CallInEditor, Category="Maze")
    void ClearMaze();

    /*
     * Debug-отрисовка клеток и стен через DrawDebugLine / DrawDebugBox.
     */
    UFUNCTION(BlueprintCallable, Category="Maze|Debug")
    void DrawDebugMaze() const;

protected:
    /*
     * Корневой компонент Actor'а.
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Maze|Components")
    USceneComponent* SceneRoot;

    /*
     * InstancedStaticMeshComponent для пола.
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Maze|Components")
    UInstancedStaticMeshComponent* FloorInstances;

    /*
     * InstancedStaticMeshComponent для стен.
     * Все стены — это instances одного меша.
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Maze|Components")
    UInstancedStaticMeshComponent* WallInstances;

    /*
     * InstancedStaticMeshComponent для маркеров старта/выхода.
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Maze|Components")
    UInstancedStaticMeshComponent* MarkerInstances;

public:
    // -------------------------
    // Основные параметры генерации
    // -------------------------

    // Ширина лабиринта в клетках.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Generation", meta=(ClampMin="2", ClampMax="200"))
    int32 Width = 20;

    // Высота лабиринта в клетках.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Generation", meta=(ClampMin="2", ClampMax="200"))
    int32 Height = 20;

    // Размер одной клетки в Unreal units.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Generation", meta=(ClampMin="100.0"))
    float CellSize = 400.0f;

    /*
     * Seed для генерации.
     * Если bUseRandomSeed = false, один и тот же Seed даёт одинаковый лабиринт.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Generation")
    int32 Seed = 12345;

    /*
     * Если true, при каждой генерации будет использоваться случайный seed.
     * Если false, используется значение Seed.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Generation")
    bool bUseRandomSeed = false;

    // Как выбирать стартовую клетку.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Generation")
    EMazeStartMode StartMode = EMazeStartMode::Random;

    /*
     * Если true, лабиринт будет пересобираться в редакторе при изменении параметров.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Build")
    bool bAutoGenerateOnConstruction = true;

    // Если false, будет только debug-отрисовка без реальных стен и пола.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Build")
    bool bBuildGeometry = true;

    // Меш пола. Для начала можно назначить стандартный Cube.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Build")
    UStaticMesh* FloorMesh = nullptr;

    // Меш стены. Для начала можно назначить стандартный Cube.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Build")
    UStaticMesh* WallMesh = nullptr;

    // Меш маркера старта/выхода. Можно тоже использовать Cube или Sphere.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Build")
    UStaticMesh* MarkerMesh = nullptr;

    /*
     * Масштаб пола.
     * Значения подобраны под стандартный куб, но их можно изменить .
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Build")
    FVector FloorScale = FVector(4.0f, 4.0f, 0.1f);

    /*
     * Масштаб стены.
     * Значения подобраны под стандартный куб.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Build")
    FVector WallScale = FVector(4.0f, 0.25f, 2.0f);

    
    // Модификации алгоритма для оценки 9-10
    

    /*
     * Процент дополнительных соединений.
     *
     * Обычный DFS создаёт "идеальный лабиринт":
     * - все клетки связаны;
     * - между двумя клетками ровно один путь;
     * - циклов нет.
     *
     * Эта модификация удаляет часть дополнительных стен после основной генерации.
     * В результате появляются альтернативные пути и циклы.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Advanced", meta=(ClampMin="0.0", ClampMax="0.5"))
    float ExtraConnectionsPercent = 0.0f;

    /*
     * Смещение выбора направления.
     *
     * 0.5 — обычный баланс.
     * Ближе к 1.0 — чаще горизонтальные проходы.
     * Ближе к 0.0 — чаще вертикальные проходы.
     *
     * Это модификация, влияющая на стиль лабиринта.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Advanced", meta=(ClampMin="0.0", ClampMax="1.0"))
    float HorizontalBias = 0.5f;

    
    // Debug
    

    // Включает отрисовку лабиринта debug-линиями.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Debug")
    bool bDrawDebug = true;

    // Сколько секунд живут debug-линии.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Maze|Debug")
    float DebugLifeTime = 20.0f;

private:
    /*
     * Все клетки лабиринта.
     *
     * Храним двумерную сетку как одномерный массив:
     * Index = Y * Width + X
     */
    UPROPERTY()
    TArray<FMazeCell> Cells;

    // Индекс стартовой клетки в массиве Cells.
    int32 StartIndex = INDEX_NONE;

    // Индекс клетки выхода. Выбирается как самая дальняя от старта.
    int32 ExitIndex = INDEX_NONE;

private:
    // Создаёт сетку клеток и включает все стены.
    void InitGrid();

    // Запускает DFS с возвратом.
    void RunRecursiveBacktracking(FRandomStream& RandomStream);

    // Модификация: удаляет часть дополнительных стен после генерации.
    void AddExtraConnections(FRandomStream& RandomStream);

    // Строит визуальную геометрию лабиринта.
    void BuildMazeGeometry();

    // Строит пол.
    void BuildFloor();

    // Строит стены.
    void BuildWalls();

    // Строит маркеры старта и выхода.
    void BuildMarkers();

    // Переводит координаты X/Y в индекс массива.
    int32 GetIndex(int32 X, int32 Y) const;

    // Проверяет, что координаты находятся внутри сетки.
    bool IsInside(int32 X, int32 Y) const;

    // Переводит клетку сетки в мировую позицию Unreal.
    FVector GetCellWorldLocation(const FMazeCell& Cell) const;

    // Выбирает стартовую клетку.
    int32 ChooseStartIndex(FRandomStream& RandomStream) const;

    
    int32 FindFarthestCellFromStart(int32 InStartIndex) const;

    
    TArray<int32> GetUnvisitedNeighborsBiased(int32 CellIndex, FRandomStream& RandomStream) const;

    // Убирает стену между двумя соседними клетками.
    void RemoveWallBetween(int32 AIndex, int32 BIndex);

    // Проверяет, есть ли стена между двумя соседними клетками.
    bool HasWallBetween(int32 AIndex, int32 BIndex) const;

    // Добавляет одну стену как instance.
    void AddWallInstance(const FVector& Location, const FRotator& Rotation);
};
