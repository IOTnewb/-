#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
	srand((int)time(NULL));

	// 1. 24장의 카드중 무작위 4장을 플레이어들이 받는다.
	int card[24] = {10 , 11 , 20 , 21 , 30 , 31 , 40 , 41 , 50 , 51 , 60 , 61 , 70 , 71 , 80 , 81 , 90 , 91 , 100 , 101 , 110 , 111 , 120 , 121};


	int player[20];
	int computer[4];
	int result[4];

	int random;

	for (int i = 0; i < 4; i++)
		{
		random = (rand() % 24);

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

	for (int i = 0; i < 4; i++)
	{

		cout << player[i] << endl;

	}


	for (int i = 0; i < 4; i++)
	{

		random = (rand() % 24);

		computer[i] = card[random];

		while (1)
		{

			if (computer[i] == 0)
			{

				random = (rand() % 24);
				computer[i] = card[random];

			}

			else if (computer[i] != 0)
			break;
		}

		card[random] = 0;

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
			if (computer[i] > computer[j])
			{
				b = computer[i];
				computer[i] = computer[j];
				computer[j] = b;
			}
		}
		cout << endl;
		cout << computer[i];
	}


	// 3. 남은 카드 더미에서 한장을 뽑고, 재정렬 후 상대방의 카드를 추측한다.

	int locate = 0;
	int value = 0;

	int x = 4;

	while (1)
	{
		for (int i = x; i < x + 1; i++)
		{
			random = (rand() % 24);

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

			cout << "더미에서 나온 카드" << player[x] << endl;
		}

		cout << "현재 카드";
		for (int i = 0; i < x; i++)
		{
			cout << player[i] << " ";
		}

		cout << "추측할 위치와 카드숫자" << endl;

		cin >> locate;
		cin >> value;

		if (computer[locate] == value)
			result[locate] = value;

		for (int i = 0; i < x; i++)
		{
			cout << result[i] << endl;
		}
		x++;

	}


	// 4. 추측

		





	// 5. 컴퓨터의 카드배열이 다 공개되면 게임 끝

	return 0;
}
