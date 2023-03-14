#ifndef PROGRAMOWANIE_OBIEKTOWE_SIEVE_H
#define PROGRAMOWANIE_OBIEKTOWE_SIEVE_H

#include <iostream>
#include <vector>

class Sieve {
    std::vector<bool> primeNumbers;
    unsigned long long int MAX_NUM;
    bool isFiltered = false;

public:
    Sieve();
    explicit Sieve(unsigned long long int);
    ~Sieve();
    std::vector<bool> filter();
    void print();

    static bool isPrime(unsigned long long int);
};


#endif //PROGRAMOWANIE_OBIEKTOWE_SIEVE_H
