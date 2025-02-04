//
// Created by Martin Oywa on 04/02/2025.
// Range-based Loops
//
#include <iostream>
#include <vector>

using namespace std;

int count_divisible_by_3_and_5(vector<int> vec) {
    int count {0};
    for (auto i : vec)
        if (i % 3 == 0 || i % 5 == 0)
            count++;
    return count;
}