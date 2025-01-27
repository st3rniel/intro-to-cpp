//
// Created by Martin Oywa on 27/01/2025.
//

#include <iostream>

using namespace std;

bool can_you_work(int age, bool parental_consent, bool ssn, bool accidents) {
    cout << boolalpha; // 0 is False and 1 is True
    return (age >= 18 || (age > 15 && parental_consent == true)) && ssn == true && accidents != true;
}
