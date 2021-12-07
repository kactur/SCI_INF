#include "szyfry.h"
#include <iostream>
using namespace std;

string szyfry::szyfrpodstawieniowy(string zdanie1)
{
	unsigned char modyfikacja;
	int przesuniecie;
	string modyfikacja2;


	cout << "O ile miejsc chcesz przesunac litery? MAX 26" << endl;
	cin >> przesuniecie;
	cout << endl;

	if (przesuniecie > 26)
	{
		cout << "Wartosc przesuniecia musi byc mniejsza lub rowna 26" << endl;
		cout << "Nie zaszyfrowano" << endl;
		return zdanie1;
	}

	if (przesuniecie < 1)
	{
		cout << "Wartosc przesuniecia powinna byc wieksza lub rowna 1" << endl;
		cout << "Nie zaszyfrowano" << endl;
		return zdanie1;
	}

	if (przesuniecie > 1)
	{
		for (int i = 0; i < zdanie1.size(); i++)
		{
			if (zdanie1[i] < 123 && zdanie1[i] > 96)
			{
				modyfikacja = zdanie1[i] + przesuniecie;

				if (modyfikacja > 122)
				{
					modyfikacja = modyfikacja % 123 + 97;
				}
				modyfikacja2 += modyfikacja;
			}
			else
			{
				modyfikacja2 += zdanie1[i];
			}
		}
		return modyfikacja2;
	}
}

string szyfry::szyfrprzestawieniowy(string zdanie2)
{
	for (int i = 0; i < zdanie2.size() - 1; i += 2)
	{
		swap(zdanie2[i], zdanie2[i + 1]);
	}
	return zdanie2;
}

string szyfry::szyfrmieszany(string zdanie3)
{
	int przesuniecie;

	cout << "O ile miejsc chcesz przesunac litery? MAX 26" << endl;
	cin >> przesuniecie;
	cout << endl;

	for (int i = 0; i < zdanie3.size(); i++)
	{
		if (zdanie3[i] < 123 && zdanie3[i] > 96)
		{
			zdanie3[i] += przesuniecie;
		}
	}

	for (int i = 0; i < zdanie3.size() - 1; i += 2)
	{
		swap(zdanie3[i], zdanie3[i + 1]);
	}
	return zdanie3;
}

string szyfry::deszyfracja(string zdanie4)
{
	string odszyfrowane;
	odszyfrowane = zdanie4;

	for (int i = 1; i < 26; i++)
	{
		for (int x = 0; x < zdanie4.size(); x++)
		{
			if (zdanie4[x] < 123 && zdanie4[x] > 97)
			{
				zdanie4[x] -= i;

				if (zdanie4[x] < 97)
				{
					zdanie4[x] = zdanie4[x] % 123 + 26;
				}
			}
		}
		cout << "  " << zdanie4 << "  ";
		zdanie4 = odszyfrowane;
	}
	return zdanie4;
}