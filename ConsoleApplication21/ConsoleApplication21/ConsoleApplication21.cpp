#include <iostream>
#include <string>
#include "szyfry.h"
using namespace std;

szyfry szyfrowanie;


int main()
{
	string zdanie;
	int szyfr;

	cout << "Napisz zdanie skladajace sie z malych liter" << endl;
	getline(cin, zdanie);
	cout << endl;

	cout << "Wybierz co chcesz zrobic ze zdaniem: " << endl;
	cout << "1. Wykonac szyfr podstawieniowy" << endl;
	cout << "2. Wykonac szyfr przestawieniowy" << endl;
	cout << "3. Wykonac szyfr podstawieniowy i przestawieniowy" << endl;
	cout << "4. Odszyfrowac tekst" << endl;
	cout << endl;
	cout << "Wybieram: ";
	cin >> szyfr;
	cout << endl;

	if (szyfr == 1)
	{
		cout << "Szyfr to: " << szyfrowanie.szyfrpodstawieniowy(zdanie) << endl;
	}

	if (szyfr == 2)
	{
		cout << "Szyfr to: " << szyfrowanie.szyfrprzestawieniowy(zdanie) << endl;
	}

	if (szyfr == 3)
	{
		cout << "Szyfry to: " << szyfrowanie.szyfrmieszany(zdanie) << endl;
	}

	if (szyfr == 4)
	{
		cout << "Wszystkie mozliwosci odkodowania szyfru to: " << endl;
		cout << szyfrowanie.deszyfracja(zdanie);
	}

}