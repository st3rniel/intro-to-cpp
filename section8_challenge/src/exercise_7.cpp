//
// Created by Martin Oywa on 22/01/2025.
// USD to KSH Converter
//

#include <iostream>

using namespace std;

int main() {
    const double ksh_per_usd {129.50};

    cout << "Welcome to USD to KSH Converter." << endl;
    cout << "Enter value in USD: ";

    double usd {0.0};
    cin >> usd;

    double ksh = usd * ksh_per_usd;
    cout << usd << " USD is equivalent to " << ksh << " KSH." << endl;

    return 0;
}
