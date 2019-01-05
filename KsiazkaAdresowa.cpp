#include <iostream>
#include <windows.h>
#include "KsiazkaAdresowa.h"

using namespace std;

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    //dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.id = pobierzIdNowegoUzytkownika();

    do
    {
        cout << endl << "Podaj login: ";
        cin >> uzytkownik.login;
    } while (czyIstniejeLogin(uzytkownicy, uzytkownik.login) == true);

    cout << "Podaj haslo: ";
    cin >> uzytkownik.haslo;

    return uzytkownik;
}
