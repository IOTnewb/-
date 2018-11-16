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
		count++;
	}
}

void Player::Drawdummy(int* card)
{
	for (int i = count; i < count + 1; i++)
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

void Player::Printcard()
{
	for (int i = 0; i < count; i++)
	{
		cout << player[i] << " ";
	}

	cout << endl;
}
