#include "main.h"

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
	int x = 4;
	int b = 0;
	Drawcard(player, card);
	Drawcard(computer, card);

	Printcard(player,&x);
	Printcard(computer,&x);


	// 2. �÷��̾���� ���� 4���� ī�带 �꿡 �°� �����Ѵ�.

	SortArray(computer);

	// 3. ���� ī�� ���̿��� ������ �̰�, ������ �� ������ ī�带 �����Ѵ�.

	int locate = 0;
	int value = 0;

	while (1)
	{
		Drawdummy(player, card, x);

		PrintColor(computer, result);

		cout << endl;
		cout << "���̿��� ���� ī�� : " << player[x] << endl;
		cout << "���� ī�� : " << " ";

		Printcard(player,&x);

		cout << "������ ��ġ�� ī�����" << endl;

		GetGuess(&locate, &value);

		ConfirmAnswer(computer,result,&locate, &value, &score);

		x++;
		turn++;
		// 4. ��ǻ���� ī��迭�� �� �����Ǹ� �ϼ��� �����ϰ� ���� ��

		ConfirmResult(computer, result, &b);
		if (b == 1) break;
	}

	CalculateScore(&score, &turn);
	
	cout << "���� : " << score;

	return 0;
}
