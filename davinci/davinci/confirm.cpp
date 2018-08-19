#include "main.h"


void ConfirmAnswer(Computer* computer, int* result, Guess* guess, int* score)
{
	if (computer->computer[guess->locate] == guess->value)	result[guess->locate] = guess->value;
	else score = score - 10;
}

void ConfirmResult(Computer* computer, int* result, int* b)
{
	if ((computer->computer[0] == result[0]) && (computer->computer[1] == result[1]) && (computer->computer[2] == result[2]) && (computer->computer[3] == result[3]))
	{
		cout << "³¡" << endl;
		*b = 1;
	}
}
