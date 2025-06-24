//
// Created by Martin Oywa on 13/05/2025.
// Read a number N from the user and then find the first N primes.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> first_n_primes(int N); // declare
bool is_prime(int num);

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

vector<int> first_n_primes(int N) { // define
    vector<int> primes {};
    int current = 2;

    while (primes.size() < N) {
        if (is_prime(current)) {
            primes.push_back(current);
        }
        current++;
    }

    return primes;
}