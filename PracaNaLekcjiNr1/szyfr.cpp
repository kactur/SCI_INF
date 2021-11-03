// szyfr.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

string szyfrpodstawieniowy(string zdanie1)
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

string szyfrprzestawieniowy(string zdanie2)
{
	for (int i = 0; i < zdanie2.size() - 1; i += 2)
	{
		swap(zdanie2[i], zdanie2[i + 1]);
	}
	return zdanie2;
}

string szyfrmieszany(string zdanie3)
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

string deszyfracja(string zdanie4)
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
				
				if(zdanie4[x] < 97)
				{
					zdanie4[x] = zdanie4[x] % 123 + 26;
				}
			}
		}
		cout << "  " << zdanie4 <<  "  ";
		zdanie4 = odszyfrowane;
	}
	return zdanie4;
}

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
		cout << "Szyfr to: " << szyfrpodstawieniowy(zdanie) << endl;
	}
	
	if (szyfr == 2)
	{
		cout << "Szyfr to: " << szyfrprzestawieniowy(zdanie) << endl;
	}
	
	if (szyfr == 3)
	{
		cout << "Szyfry to: " << szyfrmieszany(zdanie) << endl;
	}
	
	if (szyfr == 4)
	{
		cout << "Wszystkie mozliwosci odkodowania szyfru to: " << endl;
		cout << deszyfracja(zdanie);
	}
	
}
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
