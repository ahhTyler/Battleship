#include "stdafx.h"
#include "board.h"
#include <iostream>
using namespace std;

void Board::InitializeBoard()
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMS; j++)
		{
			gameBoard[i][j] = 0;
		}
	}
}

void Board::SetBoatPosition(int x, int y)
{
	gameBoard[x][y] = 8;
}

int Board::displayBoard()
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMS; j++)
		{
			if (gameBoard[i][j] == 3)
				cout << 0;
				cout << gameBoard[i][j];
		}
		cout << endl;
	}
	return 0;
}