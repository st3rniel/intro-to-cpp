//
// Created by Martin Oywa on 19/02/2025.
// In this exercise you will create a program that will
// be used in a digital library to format and sort
// journal entries based on the authors last name.
// Each entry has room to store only the last name of the author.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

size_t has_white_space(string s) {
    size_t idx {0};
    for (size_t i = 0; i < s.length(); i++) {
        if (s.at(i) == ' ') {
            idx += i;
            break;
        }
    }
    return idx;
}

vector<string> generate_digital_library(vector<string> journals) {
    vector<string> output;

    for (string journal : journals) {
        size_t idx = has_white_space(journal);
        if (idx == 0) {
            output.push_back(journal);
        } else {
            output.push_back(journal.substr(idx+1));
        }
    }

    ranges::sort(output);

    return output;
}


// int main() {
//     string journal_entry_1 {"Isaac Newton"};
//     string journal_entry_2 {"Leibniz"};
//
//     journal_entry_1.erase(0, 6);
//
//     if (journal_entry_1 > journal_entry_2) {
//         journal_entry_1.swap(journal_entry_2);
//     }
//
//     cout << journal_entry_1 << "\n" << journal_entry_2;
//     vector<string> output = generate_digital_library(vector<string> ({"Isaac Newton", "Leibniz"}));
//
//     return 0;
// }