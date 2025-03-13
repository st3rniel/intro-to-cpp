//
// Created by Martin Oywa on 25/02/2025.
//

#ifndef MAIN_H
#define MAIN_H

#include <map>
using namespace std;

map<char, int> encryption_key();
string encrypt(string s, size_t rotation, map<char, int> key);
string decrypt(string s, size_t rotation, map<char, int> key);

#endif //MAIN_H
