#include "Racun.h"
#include <iostream>

void Racun::dodaj(Artikl _artikl)
{
	artikli.push_back(_artikl);
	//std::cout << "artikl" << _artikl.naziv << " "<<_artikl.kolicina << " " << _artikl.jedinicna_cijena;
	ukupnaCijena = ukupnaCijena + (_artikl.jedinicna_cijena * _artikl.kolicina);
}
