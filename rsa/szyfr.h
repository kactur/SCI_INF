#pragma once
#include <string>
#include <iostream>
#include <utility>
using namespace std;
class szyfr
{
public:
	szyfr();
	~szyfr();
	string start;
	string szyfr_podstawieniowy(string start);
	string szyfr_przestawieniowy(string start);
	string szyfr_mieszany(string start);
	string deszyfrowanie(string start);
	string rsa(string start);
};

