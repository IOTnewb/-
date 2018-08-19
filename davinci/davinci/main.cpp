#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>

using namespace std;

void Drawcard(int* array , int* card)
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

void Printcard(int* array)
{
	for (int i = 0; i < 4; i++)
	{
		cout << array[i] << " ";
	}

		cout << endl;
}


void SortArray(int* computer)
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

void Drawdummy(int* player , int* card , int x)
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

void PrintColor(int* computer , int* result)
{
	for (int i = 0; i < 4; i++)
	{
		if (computer[i] % 2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		cout << result[i] << " ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}

}


int main()
{
	srand((int)time(NULL));

	// 1. 24���� ī���� ������ 4���� �÷��̾���� �޴´�.
	int card[24] = { 10 , 11 , 20 , 21 , 30 , 31 , 40 , 41 , 50 , 51 , 60 , 61 , 70 , 71 , 80 , 81 , 90 , 91 , 100 , 101 , 110 , 111 , 120 , 121 };

	int score = 1040;
	int player[20];
	int computer[4];
	int result[4] = { 0 , 0 , 0 , 0 };
	
	int turn = 0;

	Drawcard(player, card);
	Drawcard(computer, card);

	Printcard(player);
	Printcard(computer);
		

	// 2. �÷��̾���� ���� 4���� ī�带 �꿡 �°� �����Ѵ�.
	
	SortArray(computer);
	
	// 3. ���� ī�� ���̿��� ������ �̰�, ������ �� ������ ī�带 �����Ѵ�.

	int locate = 0;
	int value = 0;
	int x = 4;

	while (1)
	{
		Drawdummy(player, card, x);
		
		PrintColor(computer, result);
		
		cout << endl;
		cout << "���̿��� ���� ī�� : " << player[x] << endl;
		cout << "���� ī�� : " << " ";

		Printcard(player);

		cout << "������ ��ġ�� ī�����" << endl;

		cin >> locate;
		while (1)
		{
			if (locate > 3) {
				cout << "��ġ�� �ٽ�  �Է��Ͻÿ�" << endl;
				cin >> locate;
			}
			if (locate < 4) break;
		}
		cin >> value;
		while (1)
		{
			if (value != 10 && value != 11 && value != 20 && value != 21 && value != 30 && value != 31 && value != 40 && value != 41 && value != 50 && value != 51 && value != 60 && value != 61 && value != 70 && value != 71 && value != 80 && value != 81 && value != 90 && value != 91 && value != 100 && value != 101 && value != 110 && value != 111 && value != 120 && value != 121) {
				cout << "���� �ٽ�  �Է��Ͻÿ�" << endl;
				cin >> value;
			}
			if (value == 10 || value == 11 || value == 20 || value == 21 || value == 30 || value == 31 || value == 40 || value == 41 || value == 50 || value == 51 || value == 60 || value == 61 || value == 70 || value == 71 || value == 80 || value == 81 || value == 90 || value == 91 || value == 100 || value == 101 || value == 110 || value == 111 || value == 120 || value == 121)
				break;
		}

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
