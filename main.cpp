#include <iostream>
#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    int idZalogowanegoUzytkownika = 0;
    int idOstatniegoAdresata = 0;

    KsiazkaAdresowa ksiazkaAdresowa ("Uzytkownicy.txt", "Adresaci.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();






    return 0;
}
