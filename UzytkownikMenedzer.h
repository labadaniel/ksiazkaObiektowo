#ifndef UZYTKOWNKMENEDZER_H
#define UZYTKOWNKMENEDZER_H
#include <iostream>
#include <vector>
#include <algorithm>
#include "Uzytkownicy.h"
#include "PlikZUzytkownikami.h"
#include "PlikZAdresatami.h"
#include "Adresaci.h"
using namespace std;

class UzytkownikMenedzer {
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;



public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami)
    {
        idZalogowanegoUzytkownika = 0;
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    void logowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
    int pobierzIdZalogowanegoUzytkownika();

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
};
#endif
