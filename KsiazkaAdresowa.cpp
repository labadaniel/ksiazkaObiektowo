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



