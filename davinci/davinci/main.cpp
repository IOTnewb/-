#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>

using namespace std;

int main()
{
	srand((int)time(NULL));

	// 1. 24장의 카드중 무작위 4장을 플레이어들이 받는다.
	int card[24] = { 10 , 11 , 20 , 21 , 30 , 31 , 40 , 41 , 50 , 51 , 60 , 61 , 70 , 71 , 80 , 81 , 90 , 91 , 100 , 101 , 110 , 111 , 120 , 121 };

	int score = 1040;
	int player[20];
	int computer[4];
	int result[4] = { 0 , 0 , 0 , 0 };

	int random;
	int turn = 0;

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

		cout << player[i] << " ";

	}
	cout << endl;

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

		cout << computer[i] << " ";

	}
	cout << endl;

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

		cout << computer[i] << " ";

	}
	cout << endl;

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
		for (int i = 0; i < 4; i++)
			{
			if (computer[i] % 2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				cout << result[i] << " ";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			}
			cout << endl;
			cout << "더미에서 나온 카드 : " << player[x] << endl;
		}

		cout << "현재 카드 : " << " ";
		for (int i = 0; i < x; i++)
		{
			cout << player[i] << " ";
		}
		cout << endl;

		cout << "추측할 위치와 카드숫자" << endl;

		cin >> locate;
		while (1)
		{
			if (locate > 3) {
				cout << "위치을 다시  입력하시오" << endl;
				cin >> locate;
			}
			if (locate < 4) break;
		}
		cin >> value;
		while (1)
		{
			if (value != 10 && value != 11 && value != 20 && value != 21 && value != 30 && value != 31 && value != 40 && value != 41 && value != 50 && value != 51 && value != 60 && value != 61 && value != 70 && value != 71 && value != 80 && value != 81 && value != 90 && value != 91 && value != 100 && value != 101 && value != 110 && value != 111 && value != 120 && value != 121) {
				cout << "값을 다시  입력하시오" << endl;
				cin >> value;
			}
			if (value == 10 || value == 11 || value == 20 || value == 21 || value == 30 || value == 31 || value == 40 || value == 41 || value == 50 || value == 51 || value == 60 || value == 61 || value == 70 || value == 71 || value == 80 || value == 81 || value == 90 || value == 91 || value == 100 || value == 101 || value == 110 || value == 111 || value == 120 || value == 121)
				break;
		}

		if (computer[locate] == value)	result[locate] = value;
		else score = score - 10;
		x++;
		turn++;
		// 4. 컴퓨터의 카드배열이 다 공개되면 턴수를 공개하고 게임 끝

		if ((computer[0] == result[0]) && (computer[1] == result[1]) && (computer[2] == result[2]) && (computer[3] == result[3]))
		{
			cout << "끝" << endl;
			break;
		}
	}
	score = score - turn * 10;
	cout << "점수 : " << score;

	return 0;
}
