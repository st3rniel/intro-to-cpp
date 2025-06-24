//
// Created by Martin Oywa on 08/05/2025.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// declare functions
double calculate_mean(vector<int> vec);
int calculate_range(vector<int> vec);
int get_smallest_number(vector<int> vec);
int get_largest_number(vector<int> vec);

// define functions
double calculate_mean(vector<int> vec) {
    double sum = 0;

    for (auto e: vec) {
        sum += e;
    }

    return sum / vec.size();
}

int calculate_range(vector<int> vec) {
    return get_largest_number(vec) - get_smallest_number(vec);
}

int get_smallest_number(vector<int> vec) {
    return *ranges::min_element(vec);
}

int get_largest_number(vector<int> vec) {
    return *ranges::max_element(vec);
}
