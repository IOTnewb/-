#include "main.h"


void GetGuess(Guess* guess)
{
	cin >> guess->locate;
	while (1)
	{
		if (guess->locate > 3) {
			cout << "위치을 다시  입력하시오" << endl;
			cin >> guess->locate;
		}
		if (guess->locate < 4) break;
	}
	cin >> guess->value;
	while (1)
	{
		if (guess->value != 10 && guess->value != 11 && guess->value != 20 && guess->value != 21 && guess->value != 30 && guess->value != 31 && guess->value != 40 && guess->value != 41 && guess->value != 50 && guess->value != 51 && guess->value != 60 && guess->value != 61 && guess->value != 70 && guess->value != 71 && guess->value != 80 && guess->value != 81 && guess->value != 90 && guess->value != 91 && guess->value != 100 && guess->value != 101 && guess->value != 110 && guess->value != 111 && guess->value != 120 && guess->value != 121) {
			cout << "값을 다시  입력하시오" << endl;
			cin >> guess->value;
		}
		if (guess->value == 10 || guess->value == 11 || guess->value == 20 || guess->value == 21 || guess->value == 30 || guess->value == 31 || guess->value == 40 || guess->value == 41 || guess->value == 50 || guess->value == 51 || guess->value == 60 || guess->value == 61 || guess->value == 70 || guess->value == 71 || guess->value == 80 || guess->value == 81 || guess->value == 90 || guess->value == 91 || guess->value == 100 || guess->value == 101 || guess->value == 110 || guess->value == 111 || guess->value == 120 || guess->value == 121)
			break;
	}
}
