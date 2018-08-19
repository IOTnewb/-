#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>

using namespace std;

void CalculateScore(int* score, int* turn);
void ConfirmAnswer(int* computer, int* result, int* locate, int* value, int* score);
void ConfirmResult(int* computer, int* result, int* b);
void Drawcard(int* array, int* card);
void Drawdummy(int* player, int* card, int x);
void GetGuess(int* locate, int* value);
void Printcard(int* array, int*x);
void PrintColor(int* computer, int* result);
void SortArray(int* computer);
