#include "szyfr.h"
szyfr::szyfr()
{

}

szyfr::~szyfr()
{

}

string szyfr::szyfr_podstawieniowy(string start)
{
	int klucz;
	string temp_string;
	cout << "O ile miejsc chcesz przesunac litery?";
	cin >> klucz;
	for (int i = 0; i < start.size(); i++)
	{
		if (start[i] > 96)
		{
			unsigned char temp;
			temp = start[i] + klucz;
			if (temp >= 123)
			{
				temp = (temp % 123) + 97;
			}
			temp_string += temp;
		}
		else
		{
			temp_string += start[i];
		}
	}
	return temp_string;
}

string szyfr::szyfr_przestawieniowy(string start)
{
	string temp_string;
	char temp1, temp2;
	for (int i = 0; i < start.size() - 1; i += 2)
	{
		swap(start[i], start[i + 1]);
		temp1 = start[i];
		temp_string += temp1;
		temp1 = start[i + 1];
		temp_string += temp1;
	}
	if (start.size() % 2 == 1)
	{
		temp1 = start[start.size() - 1];
		temp_string += temp1;
	}
	return temp_string;
}

string szyfr::szyfr_mieszany(string start)
{
	string koniec;

	koniec = szyfr_podstawieniowy((szyfr_przestawieniowy(start)));
	return koniec;
}

string szyfr::deszyfrowanie(string start)
{
	int klucz;
	string temp_string;
	for (int klucz = 0; klucz < 26; klucz++)
	{
		for (int i = 0; i < start.size(); i++)
		{
			if (start[i] > 96)
			{
				unsigned char temp;
				temp = start[i] - klucz;
				if (temp <= 96)
				{
					char x = (start[i] % 97) + 123;
					x -= klucz;
					temp = x;
				}
				temp_string += temp;
			}
			else
			{
				temp_string += start[i];
			}
		}
		cout << "Wszystkie mozliwosci: " << temp_string << endl;
		temp_string = "";
	}
	return temp_string;
}

int modInverse(int a, int m)
{
	for (int x = 1; x < m; x++)
		if (((a % m) * (x % m)) % m == 1)
			return x;
}

string szyfr::rsa(string start)
{
	int pierwsza1, pierwsza2;
	cout << "Podaj wybrana liczbe pierwsza" << endl;
	cin >> pierwsza1;
	cout << "Podaj druga liczbe pierwsza" << endl;
	cin >> pierwsza2;
	int n = pierwsza1 * pierwsza2;
	int euler = (pierwsza1 - 1) * (pierwsza2 - 1);
	cout << "Teraz wybierz liczbe z przedzialu od 1 do " << euler << ". Liczby e i " << euler << " powinny byc pierwsze";
	int e; cin >> e;
	int d; d = modInverse(e, euler);

	pair<int, int> publiczny;
	publiczny.first = n;
	publiczny.second = e;
	cout << "Twoj klucz publiczny: " << publiczny.first << "   " << publiczny.second << endl;
	pair<int, int> prywatny;
	prywatny.first = n;
	prywatny.second = d;
	cout << "Twoj klucz prywatny:  " << prywatny.first << "   " << prywatny.second << endl;
	return " ";
}
