//
// Created by Martin Oywa on 08/05/2025.
//
#include <iostream>

using namespace std;

int scope_ii() {
    cout << "This is from scope_ii.cpp" << endl;

    int arg1 {-1};
    cout << arg1 << endl;
    { // no idea what this is lol
        char arg1 {'A'};
        cout << arg1 << endl;
    }
    cout << arg1 << endl;
    /*
     * I understand that arg1 gets instantiated in a new block,
     * but how comes a random code block just worked? Is this like
     * calling an anonymous function?
     */

    return 0;
}