#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>

using namespace std;

int main()
{
	srand((int)time(NULL));

	// 1. 24���� ī���� ������ 4���� �÷��̾���� �޴´�.
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

	// 2. �÷��̾���� ���� 4���� ī�带 �꿡 �°� �����Ѵ�.
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

	// 3. ���� ī�� ���̿��� ������ �̰�, ������ �� ������ ī�带 �����Ѵ�.

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
			cout << "���̿��� ���� ī�� : " << player[x] << endl;
		}

		cout << "���� ī�� : " << " ";
		for (int i = 0; i < x; i++)
		{
			cout << player[i] << " ";
		}
		cout << endl;

		cout << "������ ��ġ�� ī�����" << endl;

		cin >> locate;
		cin >> value;

		if (computer[locate] == value)	result[locate] = value;
		else score = score - 10;
		x++;
		turn++;
		// 4. ��ǻ���� ī��迭�� �� �����Ǹ� �ϼ��� �����ϰ� ���� ��

		if ((computer[0] == result[0]) && (computer[1] == result[1]) && (computer[2] == result[2]) && (computer[3] == result[3]))
		{
			cout << "��" << endl;
			break;
		}
	}
	score = score - turn * 10;
	cout << "���� : " << score;

	return 0;
}
