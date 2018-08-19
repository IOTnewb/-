#include "main.h"


void CalculateScore(int* score, int* turn)
{
	*score = *score - *turn * 10;
}