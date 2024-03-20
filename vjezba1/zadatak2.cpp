//#include "Kupac.h"
//#include <iostream>
//using namespace std;
//int main() {
//
//    Kupac Ante(Racun(1)); // Ante ima račun broj 1
//
//    Ante.racun.dodaj(Artikl("Jabuka", 1, 6)); // 1 kg, 6 kn/kg
//
//    Ante.racun.dodaj(Artikl("Banana", 2, 7.5)); // 2 kg, 7.5 kn/kg
//
//    Ante.racun.dodaj(Artikl("Coca cola 2l", 2, 10)); // 2 boce, 10 kn/boca
//
//    Ante.racun.dodaj(Artikl("Krumpir", 17, 11)); 
//
//    cout << "Ukupno: " << Ante.racun.ukupnaCijena << " kn" << endl; // 41 kn
//
//
//
//    /* U nastavku ispišite koji je najskuplji artikl kojeg je Ante platio
//
//       (naziv i ukupna cijena). Npr.
//
//       
//
//
//
//       Najskuplje placeni artikl je Coca cola 2l (20kn)
//
//    */
//
//    Artikl najskuplji_artikl = Ante.racun.artikli[0];
//    for (int i=0;i<Ante.racun.artikli.size();i++)
//    {
//        Artikl x  = Ante.racun.artikli[i]; 
//        if (x.kolicina * x.jedinicna_cijena > najskuplji_artikl.jedinicna_cijena * najskuplji_artikl.kolicina) {
//            najskuplji_artikl = x;
//        }
//    }
//    cout << "Najskuplje placeni artikl je " << najskuplji_artikl.naziv << " (" << najskuplji_artikl.kolicina * najskuplji_artikl.jedinicna_cijena << ")";
//    return 0;
//
//}