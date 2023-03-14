#include "Sieve.h"

Sieve::Sieve() {
    this->MAX_NUM = 100;
    primeNumbers.resize(this->MAX_NUM, true);
}

Sieve::Sieve(unsigned long long int MAX_NUM) {
    if(MAX_NUM <= 0) throw std::invalid_argument("Sieve argument must be positive");
    this->MAX_NUM = MAX_NUM;
    primeNumbers.resize(this->MAX_NUM, true);
}

Sieve::~Sieve() = default;

std::vector<bool> Sieve::filter() {
    if(isFiltered) return primeNumbers;

    primeNumbers[0] = false; // jedynka nie jest liczba pierwsza
    for(int i = 2; i <= MAX_NUM; i++){
        if(primeNumbers[i - 1] == 0) continue;

        for(int j = i * 2; j <= MAX_NUM; j += i){
            if(primeNumbers[j - 1] == 0) continue;
            primeNumbers[j - 1] = 0;
//            std::cout << "i: " << i << "; j: " << j << std::endl;
        }
    }


    isFiltered = true;
    return primeNumbers;
}

void Sieve::print() {
    unsigned long long int currentNum = 0;
    for(const auto &num : primeNumbers){
        currentNum++;
        if(num == 0) continue;
        std::cout << currentNum<< " ";
    }

    std::cout << std::endl;
}

bool Sieve::isPrime(unsigned long long int num) {
    for(int i = 2; i*i <= num; i++){
        if(num % i ==  0) return false;
    }
    return true;
}
