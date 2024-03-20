#include <iostream>
#include "Plaza.h"
#include<vector>
using namespace std;

int main()
{
	vector<Plaza> plaze;
	int N;
	cout << "Unesite broj plaza (N): ";
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int velicina;
		double X;
		double Y;
		cout << "Unesite velicinu i lokaciju za "<<i+1<<".plazu: \n";
		cin >> velicina;
		cin >> X >> Y;
		//los nacin koji tehnicki radi bez constructora
		/*Plaza test;
		test.velicina = velicina;
		test.X = X;
		test.Y = Y;
		plaze.push_back(test);*/


		//dobar nacin
		plaze.push_back(Plaza(velicina, X, Y));

	}
	int M;
	cout << "unesite broj predmeta (M): ";
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int brojPlaze;
		cout << "Unesite redni broj plaze kojoj pripada "<< i + 1 << ".predmet: ";
		cin >> brojPlaze;
		int kolicina;
		string opis;
		cout << "Unesite kolicinu i opis predmeta: ";
		cin >> kolicina >> opis;
		plaze[brojPlaze - 1].predmeti.push_back(Predmet(opis, kolicina));
	}


	for ( int i = 0; i<2; ++i)
	{
		cout <<i + 1 << ". " << plaze[i].X << " " << plaze[i].Y << " D=" <<  plaze[i].velicina << " - predmeti: ";
		for (const Predmet& predmet : plaze[i].predmeti) {
			cout  << predmet.kolicina << " " << predmet.opis << "\n";
		}
		cout << "\n";
	}
}

