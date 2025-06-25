//
// Created by Martin Oywa on 25/06/2025.
//
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

// using namespace boost::multiprecision;
using namespace std;

void factorial() {

    short num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Invalid input" << endl;
        return;
    }

    cout << "The factorial of " << num << " is ";

    boost::multiprecision::cpp_int result = 1;
    for (; num > 0; result *= num--);

    cout << result << endl;
}
