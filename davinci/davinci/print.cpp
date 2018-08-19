#include "main.h"

void Printcard(int* array, int*x)
{
	for (int i = 0; i < *x; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}


void PrintColor(int* computer, int* result)
{
	for (int i = 0; i < 4; i++)
	{
		if (computer[i] % 2 == 0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		cout << result[i] << " ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}

}