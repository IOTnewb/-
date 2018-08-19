#include "main.h"

void SortArray(int* computer)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (computer[i] > computer[j])
			{
				int b = computer[i];
				computer[i] = computer[j];
				computer[j] = b;
			}
		}

		cout << computer[i] << " ";

	}
	cout << endl;

}