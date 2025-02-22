//
// Created by Martin Oywa on 19/02/2025.
// In this exercise you will create a program that will
// be used in a digital library to format and sort
// journal entries based on the authors last name.
// Each entry has room to store only the last name of the author.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    journal_entry_1.erase(0, 6);

    if (journal_entry_1 > journal_entry_2) {
        journal_entry_1.swap(journal_entry_2);
    }

    cout << journal_entry_1 << "\n" << journal_entry_2;

    return 0;
}