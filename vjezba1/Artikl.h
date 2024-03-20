#pragma once
#include <string>
using namespace std;
class Artikl
{
public:
	string naziv;
	int kolicina;
	double jedinicna_cijena;
	Artikl(string _naziv, int _kolicina,double _jedinicna_cijena) {
		naziv = _naziv;
		kolicina = _kolicina;
		jedinicna_cijena = _jedinicna_cijena;
	}
};

