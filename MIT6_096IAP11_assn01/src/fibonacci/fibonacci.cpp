//
// Created by Martin Oywa on 30/06/2025.
//
#include <iostream>
#include "fibonacci.h"

using namespace std;

// First N numbers in the fibonacci sequence
// TODO should I be checking the lengths instead of returning actual vectors.
vector<int> fibonacci(int N) {
    vector<int> result {0, 1};

    if (N < 2) {
        for (int i = 0; i < 2 - N; i++) {
            result.pop_back();
        }
        return result;
    }

    if (N == 2) {
        return result;
    }

    // add N-2 elements i.e N > 2
    for (int i = 0; i < N - 2; i++) {
        int last_idx = result.size() - 1;
        int first = result.at(last_idx-1), second = result.at(last_idx);
        // cout << first << " " << second << " " << first+second << endl;
        result.push_back(first+second);
    }

    return result;
}
