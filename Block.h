#pragma once
#include <vector>
#include <map>
#include "Position.h"
#include "Colors.h"
using namespace std;

class Block
{
private:
    int cellSize;
    int rotationState;
    vector<Color> colors;
    int rowOffset;
    int columnOffset;

public:
    Block();
    void Draw(int offsetX, int offsetY);
    void Move(int rows, int columns);
    vector<Position> GetCellPositions();
    void Rotate();
    void Undorotation();
    int id;
    map<int, vector<Position>> cells;
};