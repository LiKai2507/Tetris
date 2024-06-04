#pragma once
#include <iostream>
#include <vector>
#include "raylib.h"
#include "Colors.h"
using namespace std;

class Grid
{
private:
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
    int numRows;
    int numColumns;
    int cellSize;
    vector<Color> colors;

public:
    Grid();
    void Initialize();
    void Draw();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    int ClearFullRows();
    int grid[20][10];
};