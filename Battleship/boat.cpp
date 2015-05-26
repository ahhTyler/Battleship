#include "stdafx.h"
#include "boat.h"
#include "board.h"
#include <iostream>
using namespace std;

void ship::createBoat(int _boatSize, int x, int y, int direction)
{
	if (direction == RIGHT)
	{
		if (x + _boatSize > COLUMS)
		{
			cout << "error";
		}
		else
		{
			for (int i = 0; i < _boatSize; i++)
			{
				SetBoatPosition(x, y + i);
			}
		}
	}
	else if (direction == LEFT)
	{
		if (x - _boatSize < COLUMS)
		{
			cout << "error";
		}
		else
			{
				for (int i = 0; i > _boatSize; i++)
				{
					SetBoatPosition(x, y + i);
				}
			}
		}
	}



//		battleship.CreateBattleship(2, x, y, RIGHT);