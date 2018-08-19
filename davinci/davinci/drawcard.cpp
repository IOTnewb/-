#include "main.h"

void Player::Drawcard(int* card)
{
	for (int i = 0; i < 4; i++)
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
			else	break;
		}
		card[random] = 0;
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

void Drawdummy(Player* player , int* card)
{
	for (int i = player->x; i < player->x + 1; i++)
	{
		int random = (rand() % 24);

		player->player[i] = card[random];

		while (1)
		{
			if (player->player[i] == 0)
			{
				random = (rand() % 24);
				player->player[i] = card[random];
			}
			else break;
		}
		card[random] = 0;
	}

	cout << endl;
}