#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand((int)time(NULL));

	// 1. 24���� ī���� ������ 4���� �÷��̾���� �޴´�.
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


	// 2. �÷��̾���� ���� 4���� ī�带 �꿡 �°� �����Ѵ�.
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


	// 3. ���� ī�� ���̿��� ������ �̰�, ������ �� ������ ī�带 �����Ѵ�.



	// 4. ������ ������ �ѹ��� �����ϰų� ����� �ִ�. 



	// 5. ������ Ʋ���� ī�� ���̿��� ������ ī�带 ���濡�� �����ش�.




	// 5. �Ѹ��� ī��迭�� �� �����Ǹ� ���� ��

	return 0;
}
