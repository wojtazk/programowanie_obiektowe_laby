//
// Created by Kowal on 3/14/2023.
//

#include "Produkt.h"

void Produkt::Wypelnij(unsigned int lp, std::string marka, double ilosc, std::string jednostka, double cena,
                       std::string kategoria) {

    this->lp = lp;
    this->marka = marka;
    this->ilosc = ilosc;
    this->jednostka = jednostka;
    this->cena = cena;
    this->kategoria = kategoria;

}
