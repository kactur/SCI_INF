#include <iostream>
#include <string>
#include "szyfr.h"
int wybor;
string start, koniec;
int main()
{
	cout << "Wprowadz tekst: " << endl;
	getline(cin, start);
	cout << "Wybierz co chcesz zrobic: " << endl;
	cout << "1. Szyf podstawieniowy" << endl;
	cout << "2. Szyfr przestawieniowy" << endl;
	cout << "3. Szyfr mieszany" << endl;
	cout << "4. Deszyfracja" << endl;
	cout << "5. RSA" << endl;
	cin >> wybor;
	
	szyfr szyfr;
	
	if (wybor == 1)
	{
		koniec = szyfr.szyfr_podstawieniowy(start);
		cout << "zaszyfrowany tekst: " << koniec;
	}
	
	if (wybor == 2)
	{
		koniec = szyfr.szyfr_przestawieniowy(start);
		cout << "zaszyfrowany tekst: " << koniec;
	}
	
	if (wybor == 3)
	{
		koniec = szyfr.szyfr_mieszany(start);
		cout << "zaszyfrowany tekst: " << koniec;
	}
	
	if (wybor == 4)
	{
		koniec = szyfr.deszyfrowanie(start);
	}
	
	if (wybor == 5)
	{
		koniec = szyfr.rsa(start);
	}
}