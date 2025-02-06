//
// Created by Martin Oywa on 06/02/2025.
//
#include <iostream>

using namespace std;

int main() {
    char choice {};
    do {
        cout << "-------------------" << endl;
        cout << "1: Do this" << endl;
        cout << "2: Do that" << endl;
        cout << "3: Do something else" << endl;
        cout << "Q: Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1') {
            cout << "You chose 1 - doing this" << endl;
        } else if (choice == '2') {
            cout << "You chose 2 - doing that" << endl;
        } else if (choice == '3') {
            cout << "You chose 3 - doing something else" << endl;
        } else if (choice == 'Q' || choice == 'q') {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Invalid choice! Try again..." << endl;
        }
    } while (choice != 'Q' && choice != 'q');


    return 0;
}
