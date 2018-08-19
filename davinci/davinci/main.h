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
void Drawcard(Player* player , int* card);
void Drawcardcom(Computer* computer , int* card);
void Drawdummy(Player* player , int* card);
void GetGuess(Guess* guess);
void Printcard(Player* player);
void Printcardcom(Computer* computer);
void PrintColor(Computer* computer, int* result);
void SortArray(Computer* computer);
