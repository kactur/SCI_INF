#include <iostream>
#include "sortowanie.h"
using namespace std;

int wybor;

int main()
{
	cout << "Ktory sposob sortowania chcesz uzyc?\n";
	cout << "1. Sortowanie babelkowe\n";
	cout << "2. Sortowanie wstawieniowe" << endl;
	cin >> wybor;


	if (wybor == 1)
	{
		cout << endl << "Wylosowane liczby" << endl;
		sortowanie obiekt;
		obiekt.losowe();
		obiekt.babelkowe();
		cout << "\n Sortowanie babelkowe \n";
		obiekt.losowe();
	}
	
	if (wybor == 2)
	{
		cout << endl << "Wylosowane liczby" << endl;
		sortowanie obiekt2;
		obiekt2.losowe();
		cout << "\n Sortowanie wstawieniowe \n";
		obiekt2.wstawianie();
		obiekt2.losowe();
	}
}