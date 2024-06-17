#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;

    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    void ustawIdZalogowanegoUzytkownika(int noweId);
    void pobierzAdresatowZalogowanegoUzytkownikaZPliku();
    void wypiszWszystkichAdresatowDanegoUzytkownika();
};

#endif
