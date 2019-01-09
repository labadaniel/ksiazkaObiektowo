#ifndef UZYTKOWNKMENEDZER_H
#define UZYTKOWNKMENEDZER_H
#include <iostream>
#include <vector>
#include "Uzytkownicy.h"
#include "PlikZUzytkownikami.h"
using namespace std;

class UzytkownikMenedzer {
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();

};
#endif
