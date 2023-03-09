#ifndef PROGRAMOWANIE_OBIEKTOWE_SIEVE_H
#define PROGRAMOWANIE_OBIEKTOWE_SIEVE_H

#include <iostream>
#include <vector>

class Sieve {
    std::vector<int> primeNumbers;
    int MAX_NUM;
    bool isFiltered = false;

public:
    explicit Sieve(int);
    ~Sieve();
    std::vector<int> filter();
    void print();

    static bool isPrime(int);
};


#endif //PROGRAMOWANIE_OBIEKTOWE_SIEVE_H
