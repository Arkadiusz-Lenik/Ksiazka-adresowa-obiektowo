#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>

using namespace std;

class Uzytkownik
{
    int idUzytkownika;
    string login;
    string haslo;

public:
    void ustawId(int idUzytkownika);
    void ustawLogin(string login);
    void ustawHaslo(string haslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};

#endif
