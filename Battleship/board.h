#pragma once
#include "stdafx.h"

const int COLUMS = 10;
const int ROWS = 10;

class Board
{
public:
	int displayBoard();
	void SetBoatPosition(int x, int y);
	int getBoard();
	void InitializeBoard();

private:
	int spot;
	int gameBoard[ROWS][COLUMS];
	int board;
	int display;
};