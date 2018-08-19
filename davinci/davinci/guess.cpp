#include "main.h"


void GetGuess(int* locate, int* value)
{
	cin >> *locate;
	while (1)
	{
		if (*locate > 3) {
			cout << "위치을 다시  입력하시오" << endl;
			cin >> *locate;
		}
		if (*locate < 4) break;
	}
	cin >> *value;
	while (1)
	{
		if (*value != 10 && *value != 11 && *value != 20 && *value != 21 && *value != 30 && *value != 31 && *value != 40 && *value != 41 && *value != 50 && *value != 51 && *value != 60 && *value != 61 && *value != 70 && *value != 71 && *value != 80 && *value != 81 && *value != 90 && *value != 91 && *value != 100 && *value != 101 && *value != 110 && *value != 111 && *value != 120 && *value != 121) {
			cout << "값을 다시  입력하시오" << endl;
			cin >> *value;
		}
		if (*value == 10 || *value == 11 || *value == 20 || *value == 21 || *value == 30 || *value == 31 || *value == 40 || *value == 41 || *value == 50 || *value == 51 || *value == 60 || *value == 61 || *value == 70 || *value == 71 || *value == 80 || *value == 81 || *value == 90 || *value == 91 || *value == 100 || *value == 101 || *value == 110 || *value == 111 || *value == 120 || *value == 121)
			break;
	}
}
