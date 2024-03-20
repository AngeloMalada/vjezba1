#pragma once
#include "Predmet.h";
#include<vector>;
class Plaza

{
public:
	int velicina;
	double X;
	double Y;
	vector<Predmet> predmeti;
	Plaza(int _velicina,double _X,double _Y){
		velicina = _velicina;
		X = _X;
		Y = _Y;
	}
};

