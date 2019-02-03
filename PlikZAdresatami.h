#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include "Adresaci.h"
#include <fstream>
#include "MetodyPomocnicze.h"
#include "Adresaci.h"
#include <vector>
#include <windows.h>

using namespace std;

class PlikZAdresatami
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

public:

    PlikZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0;
        NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "Adresaci_tymczasowo.txt";
    };

    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int pobierzIdOstatniegoAdresata();
    void dopiszAdresataDoPliku(Adresat adresat);
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty(fstream &plikTekstowy);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    void usunOdczytywanyPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazweTymczasowegoPlikuNaNazweOdczytywanegoPliku(string nazwaTymczasowegoPlikuZRozszerzeniem, string nazwaPlikuZRozszerzeniem);
    void zaktualizujDaneEdytowanegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
    void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
};



#endif
