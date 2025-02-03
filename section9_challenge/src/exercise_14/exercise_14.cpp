//
// Created by Martin Oywa on 03/02/2025.
//
#include <iostream>

using namespace std;

int calculate_odd_sum_between(int start, int end) {
    int sum {0};
    for (int i = start; i <= end; i++) {
        if (i % 2 > 0) {
            sum += i;
        }
    }

    return sum;
}
