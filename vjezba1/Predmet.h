#pragma once
#include <iostream>
#include <string>

using namespace std;
class Predmet
{
public:
	string opis;
	int kolicina;
	Predmet(string _opis, int _kolicina) {
		kolicina = _kolicina;
		opis = _opis;
	}
};

