//
// Created by Martin Oywa on 30/01/2025.
//
#include <iostream>

using namespace std;

int main() {
    int age {0};
    cin >> age;

    if (age >= 16) {
        cout << "Yes - you can drive!";
    } else {
        int diff {16 - age};
        cout << "Sorry, come back in " << diff << " years";
    }

    return 0;
}
