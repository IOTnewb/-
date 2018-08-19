#include "main.h"

void Player::Printcard()
{
	for (int i = 0; i < x; i++)
	{
		cout << player[i] << " ";
	}

	cout << endl;
}


void Computer::Printcardcom()
{
	for (int i = 0; i < x; i++)
	{
		cout << computer[i] << " ";
	}

	cout << endl;
}

void PrintColor(Computer* computer, int* result)
{
	for (int i = 0; i < 4; i++)
	{
		if (computer->computer[i] % 2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		cout << result[i] << " ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}

}