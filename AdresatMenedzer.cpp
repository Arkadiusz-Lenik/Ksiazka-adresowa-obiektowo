#include "AdresatMenedzer.h"

void AdresatMenedzer::ustawIdZalogowanegoUzytkownika(int noweId)
{
    idZalogowanegoUzytkownika = noweId;
}

void AdresatMenedzer::pobierzAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresaci = plikZAdresatami.pobierzAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

void AdresatMenedzer::wypiszWszystkichAdresatowDanegoUzytkownika()
{
    for (size_t i = 0; i <adresaci.size(); i++)
    {
        cout << "ID: " << adresaci[i].pobierzId() << endl;
        cout << "ID Uzytkownika: " << adresaci[i].pobierzIdUzytkownika() << endl;
        cout << "Imie: " << adresaci[i].pobierzImie() << endl;
        cout << "Nazwisko: " << adresaci[i].pobierzNazwisko() << endl;
        cout << "Numer telefonu: " << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << "Email: " << adresaci[i].pobierzEmail() << endl;
        cout << "Adres:" << adresaci[i].pobierzAdres() << endl << endl;
    }

    if (adresaci.empty())
    {
        cout << "Ksiazka adresowa jest pusta" << endl;
    }

    system("pause");
}

void AdresatMenedzer::usunListeAdresatowZalogowanegoUzytkownika()
{
    adresaci.clear();
}
