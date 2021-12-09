#include "sortowanie.h"
sortowanie::sortowanie()
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		temp = rand() % 1000;
		elementy.push_back(temp);
	}
}
sortowanie::~sortowanie()
{

}
void sortowanie::losowe()
{
	for (int i = 0; i < 100; i++)
	{
		cout << elementy[i] << "	";
	}
}

void sortowanie::babelkowe()
{
	for (int j = 0; j < 100; j++)
	{
		for (int i = 0; i < 100; i++)
		{
			if (i != 99)
			{
				if (elementy[i] > elementy[i + 1])
				{
					temp = elementy[i];
					temp1 = elementy[i + 1];
					elementy[i] = temp1;
					elementy[i + 1] = temp;
				}
			}
		}
	}
}

void sortowanie::wstawianie()
{
	int x, i;
	vector <int> temp = elementy;
	for (int j = 99; j > -1; j--)
	{
		x = temp[j];
		i = j + 1;
		while (i < 100 && x > temp[i])
		{
			temp[i - 1] = temp[i];
			i = i + 1;
		}
		temp[i - 1] = x;
	}
	elementy = temp;
}
