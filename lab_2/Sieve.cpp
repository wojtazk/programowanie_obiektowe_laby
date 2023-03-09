#include "Sieve.h"

Sieve::Sieve(int MAX_NUM) {
    if(MAX_NUM <= 0) throw std::invalid_argument("Sieve argument must be positive");
    this->MAX_NUM = MAX_NUM;
    primeNumbers.resize(this->MAX_NUM, 1);
}

Sieve::~Sieve() = default;

std::vector<int> Sieve::filter() {
    if(isFiltered) return primeNumbers;

    primeNumbers[0] = 0; // jedynka nie jest liczba pierwsza
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
    int currentNum = 0;
    for(const int &num : primeNumbers){
        currentNum++;
        if(num == 0) continue;
        std::cout << currentNum<< " ";
    }

    std::cout << std::endl;
}

bool Sieve::isPrime(int num) {
    for(int i = 2; i*i <= num; i++){
        if(num % i ==  0) return false;
    }
    return true;
}
