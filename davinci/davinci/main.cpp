#include "main.h"

int main()
{
	srand((int)time(NULL));
	
	int card[24] = { 10 , 11 , 20 , 21 , 30 , 31 , 40 , 41 , 50 , 51 , 60 , 61 , 70 , 71 , 80 , 81 , 90 , 91 , 100 , 101 , 110 , 111 , 120 , 121 };

	// 1. 24���� ī���� ������ 4���� �÷��̾���� �޴´�.
	Player player;
	
	Drawcard(&player , card);
	Printcard(&player);

	Computer computer;
	
	Drawcardcom(&computer , card);
	Printcardcom(&computer);


	// 2. �÷��̾���� ���� 4���� ī�带 �꿡 �°� �����Ѵ�.

	SortArray(&computer);

	// 3. ���� ī�� ���̿��� ������ �̰�, ������ �� ������ ī�带 �����Ѵ�.

	Guess guess;
	
	int result[4] = { 0 , 0 , 0 , 0 };
	int turn = 0;
	int score = 1040;

	int b;

	while (1)
	{
		Drawdummy(&player , card);
		PrintColor(&computer, result);

		cout << endl;
		cout << "���̿��� ���� ī�� : " << player.player[player.x] << endl;
		cout << "���� ī�� : " << " ";

		Printcard(&player);

		cout << "������ ��ġ�� ī�����" << endl;

		GetGuess(&guess);

		ConfirmAnswer(&computer,result, &guess , &score);

		player.x++;
		turn++;
		// 4. ��ǻ���� ī��迭�� �� �����Ǹ� �ϼ��� �����ϰ� ���� ��

		ConfirmResult(&computer, result, &b);
		if (b == 1) break;
	}

	CalculateScore(&score, &turn);
	
	cout << "���� : " << score;

	return 0;
}
