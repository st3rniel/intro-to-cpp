//
// Created by Martin Oywa on 22/01/2025.
//

#include <iostream>

using namespace std;

int main() {
    int original_number {8};
    int number {original_number};

    //-- Multiply number by 2 and assign the result back to number
    //-- Add 9 to number and assign the result back to number
    //-- Subtract 3 from number and assign the result back to number
    //-- Divide number by 2 and assign the result back to number
    //-- Subtract original_number from number and assign the result back to number
    //-- Take the modulus 3 (%) of number and assign it back to number

    number = (original_number - (number * 2 + 9 - 3) / 2) % 3;

    cout << number << endl;

    return 0;
}