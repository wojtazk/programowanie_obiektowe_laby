#ifndef LAB_3_PRODUKT_H
#define LAB_3_PRODUKT_H

#include <string>

class Produkt {
    unsigned int lp;
    std::string marka;
    double ilosc;
    std::string jednostka;
    double cena;
    std::string kategoria;

public:
    void Wypelnij(unsigned int lp, std::string marka, double ilosc, std::string jednostka,
                  double cena, std::string kategoria);
    void wyswietl();
};


#endif //LAB_3_PRODUKT_H
