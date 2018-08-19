#include "main.h"

void Drawcard(int* array, int* card)
{
	for (int i = 0; i < 4; i++)
	{
		int random = (rand() % 24);

		array[i] = card[random];

		while (1)
		{
			if (array[i] == 0)
			{

				random = (rand() % 24);

				array[i] = card[random];

			}
			else	break;
		}
		card[random] = 0;
	}
}



void Drawdummy(int* player, int* card, int x)
{
	for (int i = x; i < x + 1; i++)
	{
		int random = (rand() % 24);

		player[i] = card[random];

		while (1)
		{
			if (player[i] == 0)
			{
				random = (rand() % 24);
				player[i] = card[random];
			}
			else break;
		}
		card[random] = 0;
	}

	cout << endl;
}