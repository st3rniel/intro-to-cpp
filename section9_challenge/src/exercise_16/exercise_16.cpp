//
// Created by Martin Oywa on 06/02/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int count_numbers_before_neg_99(const vector<int> &numbers) {
    int count {0};
    int index {0};

    while (index < numbers.size() && numbers.at(index) != -99) {
        count++;
        index++;
    }

    return count;
}
