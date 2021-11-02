// ConsoleApplication17.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

string szyfrpodstawieniowy(string zdanie1)
{
	int przesuniecie;
	cout << "O ile miejsc chcesz przesunac litery? MAX 26" << endl;
	cin >> przesuniecie;
	cout << endl;
	for (int i = 0; i < zdanie1.size(); i++)
	{
		if (zdanie1[i] < 123 && zdanie1[i] > 96)
		{
			zdanie1[i] += przesuniecie;
		}
		

	}
	cout << zdanie1;
	return zdanie1;
}

int main()
{
	string zdanie;
	int szyfr;


	cout << "Napisz krotkie zdanie, wszystko z malych liter" << endl;
	getline(cin,zdanie);
	cout << endl;
	cout << "Wybierz sposob szyfrowania: " << endl;
	cout << "1. Szyfr podstawieniowy" << endl;
	cout << "2. Szyfr przestawieniowy" << endl;
	cout << "3. Szyfr podstawieniowy i przestawieniowy" << endl;
	cout << "4. Odszyfruj tekst" << endl;
	cout << "Wybieram: ";
	cin >> szyfr;
	cout << endl;
	cout << "Szyfr to: " << szyfrpodstawieniowy(zdanie) << endl;




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
