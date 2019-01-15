#include <iostream>
#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    int idZalogowanegoUzytkownika = 0;
    int idOstatniegoAdresata = 0;

    KsiazkaAdresowa ksiazkaAdresowa ("Uzytkownicy.txt");
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    idZalogowanegoUzytkownika = ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    ksiazkaAdresowa.dodajAdresata (idZalogowanegoUzytkownika, idOstatniegoAdresata);
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
