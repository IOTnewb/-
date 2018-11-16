#include "main.h"

void CalculateScore(int* score, int* turn)
{
	*score = *score - *turn * 10;
}

int main()
{
	srand((int)time(NULL));
	
	int card[24] = {	10 , 11 , 20 , 21 , 30 , 31 , 
							40 , 41 , 50 , 51 , 60 , 61 , 
							70 , 71 , 80 , 81 , 90 , 91 , 
							100 , 101 , 110 , 111 , 120 , 121 };

	// 1. 24���� ī���� ������ 4���� �÷��̾���� �޴´�.
	Player *player = new Player();
	
	player->Drawcard(card);
	player->Printcard();

	Computer computer;
	
	computer.Drawcardcom(card);
	computer.Printcardcom();


	// 2. �÷��̾���� ���� 4���� ī�带 �꿡 �°� �����Ѵ�.

	computer.SortArray();

	// 3. ���� ī�� ���̿��� ������ �̰�, ������ �� ������ ī�带 �����Ѵ�.

	Guess guess;
	
	int result[4] = { 0 , 0 , 0 , 0 };
	int turn = 0;
	int score = 1040;
	int b;

	while (1)
	{
		player->Drawdummy(card);
		PrintColor(&computer, result);

		cout << endl;
		cout << "���̿��� ���� ī�� : " << player->Getplayer()[player->Getcount()] << endl;
		cout << "���� ī�� : " << " ";

		player->Printcard();

		cout << "������ ��ġ�� ī�����" << endl;

		GetGuess(&guess);

		ConfirmAnswer(&computer, result , &guess , &score);

		player->Addcount();
		turn++;
		// 4. ��ǻ���� ī��迭�� �� �����Ǹ� �ϼ��� �����ϰ� ���� ��

		ConfirmResult(&computer, result, &b);
		if (b == 1) break;
	}

	CalculateScore(&score, &turn);
	
	cout << "���� : " << score << endl;

	return 0;
}
