#include "main.h"

void Printcard(Player* player)
{
	for (int i = 0; i < player->x; i++)
	{
		cout << player->player[i] << " ";
	}

	cout << endl;
}


void Printcardcom(Computer* computer)
{
	for (int i = 0; i < computer->x; i++)
	{
		cout << computer->computer[i] << " ";
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