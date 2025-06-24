//
// Created by Martin Oywa on 24/06/2025.
//

#include <iostream>

using namespace std;

int infinite_ternary() {

    while (true) {
        int N;
        cout << "Enter a number: ";
        cin >> N;

        if (N > 1 && N % 5 == 0) {
            cout << N/5 << endl;
        } else if (N < 0) {
            cout << "Goodbye!" << endl;
            break;
        }
    }

    return 0;
}