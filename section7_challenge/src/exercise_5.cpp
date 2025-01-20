//
// Created by Martin Oywa on 20/01/2025.
//
#include <iostream>

using namespace std;

int main() {
    int arr[10] {};

    arr[0] = 100;
    arr[9] = 1000;

    for (int i = 0; i < 10; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}