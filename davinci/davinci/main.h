#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
#include "Computer.h"
#include "Player.h"
#include "Guess.h"

using namespace std;

void CalculateScore(int* score, int* turn);
void ConfirmAnswer(Computer* computer, int* result, Guess* guess, int* score);
void ConfirmResult(Computer* computer, int* result, int* b);

void GetGuess(Guess* guess);
void PrintColor(Computer* computer, int* result);
