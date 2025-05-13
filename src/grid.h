#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();
    void Initialize();
    void print();
    void draw();
    int grid[20][10];
private:
    int numRows;
    int numCols;
    int cellSize;

    std::vector<Color> colors;
    std::vector<Color> GetCellColors();
};