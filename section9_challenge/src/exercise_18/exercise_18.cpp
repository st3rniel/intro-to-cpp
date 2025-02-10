//
// Created by Martin Oywa on 10/02/2025.
//
#include <iostream>
#include <vector>

using namespace std;

int calculate_vector_pairs(vector<int> vec) {
    int result {0};

    for (int i = 0; i < vec.size(); i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            // cout << vec.at(i) << " " << vec.at(j) << endl;
            result += vec.at(i) * vec.at(j);
        }
    }

    return result;
}

// int main() {
//     vector<int> vec {1, 2, 3};
//     cout << calculate_vector_pairs(vec) << endl;
// }