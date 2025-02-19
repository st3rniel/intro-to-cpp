//
// Created by Martin Oywa on 17/02/2025.
// C-Style Strings
//

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<size_t> c_strings_and_functions(char first_name[10], char last_name[20]) {
    char whole_name[20];
    vector<size_t> result {};

    size_t first_name_length {strlen(first_name)};
    size_t last_name_length {strlen(last_name)};

    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);

    size_t whole_name_length {strlen(whole_name)};

    result.push_back(first_name_length);
    result.push_back(last_name_length);
    result.push_back(whole_name_length);

    return result;
}
