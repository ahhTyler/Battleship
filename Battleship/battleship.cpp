#include "stdafx.h"
#include "board.h"
#include <iostream>
#include <string>
#include "boat.h"
using namespace std;

string choice(char decision)
{
	if (decision == 'Y')
	{
		ship battleship;
		battleship.InitializeBoard();
		battleship.createBoat(2, 0, 0, RIGHT);
		battleship.createBoat(3, 1, 0, RIGHT);
		battleship.createBoat(3, 2, 0, RIGHT);
		battleship.createBoat(4, 3, 0, RIGHT);
		battleship.createBoat(5, 4, 0, RIGHT);

		cout << "-------------------------------------------------" << endl;
		battleship.displayBoard();
		cout << "-------------------------------------------------" << endl;
	}
	else if (decision == 'N')
	{
		return 0;
	}
}
/*string guess(char _guess)
{
	cout << "Enter a guess (x,y)";
	cin >> guess;
		if (guess == createBoat)
		{
			cout << "hit";
		}
		else if (guess != createBoat)
		{
			cout << "miss";
		}
	return battleship.displayBoard();

}*/

int _tmain(int argc, _TCHAR* argv[])
{
	char _choice;
	cout << "Welcome to Battleship, Time to set up your ships" << endl << "-------------------------------------------------" << endl << "Are you ready. Y or N?" << endl << "-------------------------------------------------" << endl;
	cin >> _choice;
	choice(_choice);



	return 0;
}

