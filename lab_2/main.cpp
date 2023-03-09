#include <iostream>
#include "Sieve.h"

int main() {

    Sieve siteczko(10), sitko(40), sito(1000);

    std::cout << "\nTest Sieve: \n";
    siteczko.print(); // expected -> 1 2 3 4 5 6 7 8 9 10
    siteczko.filter();
    siteczko.print(); // expected -> 1 2 3 5 7

    std::cout << std::endl;

    sitko.print(); // expected -> 1 2 3 ... 40
    sitko.filter();
    sitko.print(); // expected -> 2 3 5 7 11 13 17 19 23 29 31 37

    std::cout << std::endl;

    sito.filter();
    sito.print(); // itd, raczej dziala


    std::cout << "\nTest Sieve isPrime method: \n";
    std::cout << "2: -> " << Sieve::isPrime(2) << std::endl; // expected -> true
    std::cout << "3: -> " << Sieve::isPrime(3) << std::endl; // expected -> true
    std::cout << "9: -> " << Sieve::isPrime(9) << std::endl; // expected -> false
    std::cout << "12: -> " << Sieve::isPrime(12) << std::endl; // expected -> false
    std::cout << "2711: -> " << Sieve::isPrime(2711) << std::endl; // expected -> true

//    std::cout << "\nTest Sieve spawning\n";
//    for(int i = 0; i < 100; i++){
//        Sieve memoryHoarder(1000);
//        memoryHoarder.filter();
//
//        std::cout << &memoryHoarder << ' ';
//    }


    std::cout << "\nSieve accepts only positive arguments: \n";
    try{
        Sieve error(0); // expected -> invalid_argument: Sieve argument must be positive
    } catch (std::invalid_argument& e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
