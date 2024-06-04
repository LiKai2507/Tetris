#pragma once
#include "Grid.h"
#include "Blocks.cpp"
#include <random>

class Game
{
private:
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
    Block GetRandomBlock();
    vector<Block> GetAllBlocks();
    void MoveBlockLeft();
    void MoveBlockRight();
    Grid grid;
    vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;

public:
    Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score;
};