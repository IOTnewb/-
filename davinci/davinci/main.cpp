#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand((int)time(NULL));

	// 1. 24���� ī���� ������ 4���� �÷��̾���� �޴´�.
	int card[24] = {10 , 11 , 20 , 21 , 30 , 31 , 40 , 41 , 50 , 51 , 60 , 61 , 70 , 71 , 80 , 81 , 90 , 91 , 100 , 101 , 110 , 111 , 120 , 121};

	int p1[12];
	int p2[12];

	int a;

	for (int i = 0; i < 4; i++)
		{
		a = (rand() % 24);

		p1[i] = card[a];

		while (1)
		{
			if (p1[i] == 0)
			{

			a = (rand() % 24);

			p1[i] = card[a];

			}
			else	break;
		}

		card[a] = 0;

		}

	for (int i = 0; i < 4; i++)
	{

		cout << p1[i] << endl;

	}


	for (int i = 0; i < 4; i++)
	{

		a = (rand() % 24);

		p2[i] = card[a];

		while (1)
		{

			if (p2[i] == 0)
			{

				a = (rand() % 24);
				p2[i] = card[a];

			}

			else if (p2[i] != 0)
			break;
		}

		card[a] = 0;

	}

	for (int i = 0; i < 4; i++)
	{

		cout << p2[i] << endl;

	}


	// 2. �÷��̾���� ���� 4���� ī�带 �꿡 �°� �����Ѵ�.



	// 3. ���� ī�� ���̿��� ������ �̰�, ������ �� ������ ī�带 �����Ѵ�.



	// 4. ������ ������ �ѹ��� �����ϰų� ����� �ִ�. 



	// 5. ������ Ʋ���� ī�� ���̿��� ������ ī�带 ���濡�� �����ش�.




	// 5. �Ѹ��� ī��迭�� �� �����Ǹ� ���� ��

	return 0;
}
