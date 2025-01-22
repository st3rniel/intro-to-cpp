//
// Created by Martin Oywa on 22/01/2025.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec {10, 20, 30, 40, 50};

    cout << "First and Last elements: " << vec.at(0) << " & " << vec.at(4) << endl;

    vec.at(0) = 100;
    vec.at(4) = 1000;

    cout << "First and Last elements: " << vec.at(0) << " & " << vec.at(4) << endl;

    return 0;
}