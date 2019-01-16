#include "KsiazkaAdresowa.h"
using namespace std;


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika ();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}

int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    uzytkownikMenedzer.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    uzytkownikMenedzer.wyswietlWszystkichAdresatow();
}

int KsiazkaAdresowa::wczytajAdresatow(int idZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.wczytajAdresatow(idZalogowanegoUzytkownika);
}




