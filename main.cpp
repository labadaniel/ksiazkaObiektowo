#include <iostream>
#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    int idZalogowanegoUzytkownika = 0;
    KsiazkaAdresowa ksiazkaAdresowa ("Uzytkownicy.txt");

    idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
