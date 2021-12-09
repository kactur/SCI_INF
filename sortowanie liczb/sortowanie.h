#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class sortowanie
{
public:
	sortowanie();
	~sortowanie();
	int temp, temp1;
	vector <int> elementy;
	void babelkowe();
	void wstawianie();
	void losowe();
};
