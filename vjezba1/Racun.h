#pragma once
#include "Artikl.h"
#include <vector>
class Racun
{
public:
	int redni_broj;
	double ukupnaCijena;
	vector<Artikl> artikli;
	Racun(int _redni_broj) : redni_broj(_redni_broj), ukupnaCijena(0) {
		
	}

	void dodaj(Artikl _artikl);
};

