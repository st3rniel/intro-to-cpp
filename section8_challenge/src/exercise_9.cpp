//
// Created by Martin Oywa on 27/01/2025.
//

#include <iostream>

using namespace std;

int main() {
    cout << boolalpha; // 0 is False and 1 is True

    int age {0};
    bool parental_consent {false};
    bool ssn {false};
    bool accidents {false};

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter parental consent (0/1): ";
    cin >> parental_consent;
    cout << "Enter Social Security Number (0/1): ";
    cin >> ssn;
    cout << "Enter accidents (0/1): ";
    cin >> accidents;

    bool eligible {(age >= 18 || (age > 15 && parental_consent == true)) && ssn == true && accidents != true};

    if (eligible) {
        cout << "\nYes, you can work.";
    } else {
        cout << "\nNo, you can't work.";
    }

    return 0;
}
