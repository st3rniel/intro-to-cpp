//
// Created by Martin Oywa on 06/02/2025.
//
#include <vector>
#include <iostream>
#include <gtest/internal/gtest-type-util.h>
using namespace std;

/*******************************************************
 * Write your code in the provided area.
 *
 * This function should use a do while loop to iterate over
 * the automatically provided vector (vec) of characters looking
 * for the first occurrence of a lowercase English vowel ('a','e','i','o','u').
 *
 * If a vowel is found, you should display to cout:
 *
 * "Vowel found: " followed by the vowel that was found.
 *
 * If no vowel is found in the vector, then you should display to cout:
 *
 * "No vowel was found"
 *
 * For example, below are several examples of vectors and what your output should be:
 *
 * {'f','r','a','n','k'}    Vowel found: a
 * {'F','R','A','N','K'}    No vowel was found
 * {'h','e','l','l','o'}    Vowel found: e
 * {}                       No vowel was found
 * {'x','y','z','o'}        Vowel found: o
 *
 * Please do NOT add std::endl or '\n' to your output statement.
 * *****************************************************/
string find_first_vowel(vector<char> vec) {
    size_t index {0};

    if (!vec.empty()) {
        do {
            char current = vec.at(index);

            if (current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u') {
                return "Vowel found: " + string(1, current); // TODO char to string conversion! Yikes!
            }
            index++;

        } while (index < vec.size());
    }

    return "No vowel was found";
}
