#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <vector>
#include "Uzytkownicy.h"
#include <fstream>
#include "MetodyPomocnicze.h"
#include <cstdlib>

using namespace std;

class PlikZUzytkownikami {
    string nazwaPlikuZUzytkownikami;
    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    fstream plikTekstowy;
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    PlikZUzytkownikami();
    vector <Uzytkownik> wczytajUzytkownikowZPliku();

};
#endif
