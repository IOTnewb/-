#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand((int)time(NULL));

	// 1. 24장의 카드중 무작위 4장을 플레이어들이 받는다.
	int card[24] = {10 , 11 , 20 , 21 , 30 , 31 , 40 , 41 , 50 , 51 , 60 , 61 , 70 , 71 , 80 , 81 , 90 , 91 , 100 , 101 , 110 , 111 , 120 , 121};

	int player[12];
	int computer[12];

	int a;

	for (int i = 0; i < 4; i++)
		{
		a = (rand() % 24);

		player[i] = card[a];

		while (1)
		{
			if (player[i] == 0)
			{

			a = (rand() % 24);

			player[i] = card[a];

			}
			else	break;
		}

		card[a] = 0;

		}

	for (int i = 0; i < 4; i++)
	{

		cout << player[i] << endl;

	}


	for (int i = 0; i < 4; i++)
	{

		a = (rand() % 24);

		computer[i] = card[a];

		while (1)
		{

			if (computer[i] == 0)
			{

				a = (rand() % 24);
				computer[i] = card[a];

			}

			else if (computer[i] != 0)
			break;
		}

		card[a] = 0;

	}

	for (int i = 0; i < 4; i++)
	{

		cout << computer[i] << endl;

	}


	// 2. 플레이어들은 받은 4장의 카드를 룰에 맞게 정렬한다.
	int b = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (player[i] > player[j])
			{
				b = player[i];
				player[i] = player[j];
				player[j] = b;
			}
		}
		cout << endl;
		cout << player[i];
	}


	// 3. 남은 카드 더미에서 한장을 뽑고, 재정렬 후 상대방의 카드를 추측한다.



	// 4. 추측이 맞으면 한번더 추측하거나 멈출수 있다. 



	// 5. 추측이 틀리면 카드 더미에서 가져온 카드를 상대방에게 보여준다.




	// 5. 한명의 카드배열이 다 공개되면 게임 끝

	return 0;
}
