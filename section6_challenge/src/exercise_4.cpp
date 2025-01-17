//
// Created by Martin Oywa on 16/01/2025.
//
#include <iostream>

using namespace std;

int main() {
    string name;
    int age {0};
    double hourly_wage {23.50};

    cout << "Enter your name and age: ";
    cin >> name >> age;
    cout << name << " " << age << " " << hourly_wage;

    return 0;
}