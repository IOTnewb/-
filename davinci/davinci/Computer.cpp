#include "main.h"

void ConfirmAnswer(Computer* computer, int* result, Guess* guess, int* score)
{
	if (computer->computer[guess->locate] == guess->value)	result[guess->locate] = guess->value;
	else *score = *score - 10;
}

void ConfirmResult(Computer* computer, int* result, int* b)
{
	if ((computer->computer[0] == result[0]) && (computer->computer[1] == result[1]) && (computer->computer[2] == result[2]) && (computer->computer[3] == result[3]))
	{
		cout << " 게임 종료 " << endl;
		*b = 1;
	}
}

void Computer::Drawcardcom(int* card)
{
	for (int i = 0; i < 4; i++)
	{
		int random = (rand() % 24);

		computer[i] = card[random];

		while (1)
		{
			if (computer[i] == 0)
			{

				random = (rand() % 24);

				computer[i] = card[random];

			}
			else	break;
		}
		card[random] = 0;
	}
}

void Computer::SortArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (computer[i] > computer[j])
			{
				int b = computer[i];
				computer[i] = computer[j];
				computer[j] = b;
			}
		}

		cout << computer[i] << " ";

	}
	cout << endl;

}


void Computer::Printcardcom()
{
	for (int i = 0; i < count; i++)
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