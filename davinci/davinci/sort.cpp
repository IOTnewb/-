#include "main.h"

void SortArray(Computer* computer)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (computer->computer[i] > computer->computer[j])
			{
				int b = computer->computer[i];
				computer->computer[i] = computer->computer[j];
				computer->computer[j] = b;
			}
		}

		cout << computer->computer[i] << " ";

	}
	cout << endl;

}