//
// Created by Martin Oywa on 30/06/2025.
//
#include <iostream>
#include "fibonacci.h"

using namespace std;

// First N numbers in the fibonacci sequence
vector<int> fibonacci(int N) {
    vector<int> result {0, 1};

    if (N < 2) {
        result.pop_back();
        return result;
    } else if (N == 2) {
        return result;
    }

    // add N-result.size() elements
    int size = result.size();
    for (int i = 0; i < N - size; i++) {
        int last_idx = size - 1;
        int first = result.at(last_idx-1), second = result.at(last_idx);
        cout << first << " " << second << " " << first+second << endl;
        result.push_back(first+second);
    }

    return result;
}
