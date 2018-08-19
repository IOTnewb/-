#include "main.h"


void ConfirmAnswer(int* computer, int* result, int* locate, int* value, int* score)
{
	if (computer[*locate] == *value)	result[*locate] = *value;
	else score = score - 10;
}

void ConfirmResult(int* computer, int* result, int* b)
{
	if ((computer[0] == result[0]) && (computer[1] == result[1]) && (computer[2] == result[2]) && (computer[3] == result[3]))
	{
		cout << "³¡" << endl;
		*b = 1;
	}
}
