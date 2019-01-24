#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include <sstream>
#include <algorithm>


using namespace std;

class MetodyPomocnicze
{
public:
    static string konwerjsaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    string wczytajLinie();
    char wczytajZnak();
    int wczytajLiczbeCalkowita();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
};
#endif
