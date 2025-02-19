//
// Created by Martin Oywa on 19/02/2025.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<size_t> findNamesIndices(const string& unformatted_full_name) {
    vector<size_t> indices;
    for (size_t i = 0; i < unformatted_full_name.length(); i++) {
        if (isupper(unformatted_full_name.at(i))) {
            indices.push_back(i);
        }
    }
    return indices;
}

string get_formatted_full_name(const string& unformatted_full_name) {
    vector<size_t> indices = findNamesIndices(unformatted_full_name);

    // TODO solution 1
    // string first_name {unformatted_full_name, indices.at(0), indices.at(1)};
    // string last_name = unformatted_full_name.substr(indices.at(1));
    // return first_name + " " + last_name;

    // TODO solution 2
    string full_name = unformatted_full_name;
    return full_name.insert(indices.at(1), " ");
}