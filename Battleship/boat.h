#include "stdafx.h"
#include "board.h"
using namespace std;
class ship : public Board
{
public:	
	int length;
	int width;
	void createBoat(int _boat, int x, int y, int direction);
};