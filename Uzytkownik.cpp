#include "Uzytkownik.h"

void Uzytkownik::ustawId(int idUzytkownika)
{
    if (idUzytkownika >= 0)
        this->idUzytkownika = idUzytkownika;
}
void Uzytkownik::ustawLogin(string login)
{
    this->login = login;
}
void Uzytkownik::ustawHaslo(string haslo)
{
    this->haslo = haslo;
}

int Uzytkownik::pobierzId()
{
    return idUzytkownika;
}
string Uzytkownik::pobierzLogin()
{
    return login;
}
string Uzytkownik::pobierzHaslo()
{
    return haslo;
}
