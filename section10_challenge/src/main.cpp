#include <iostream>
#include <string>
#include <map>

using namespace std;

// Substitution Cipher (Caesar Cipher)
// rotation number (n)
// encrypt function (x + n) mod 26
// decrypt function (x - n) mod 26
string ascii_alphabet_characters {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

map<char, int> encryption_key() {
    map<char, int> encryption_key;
    for (int i = 0; i < ascii_alphabet_characters.length(); i++) {
        encryption_key[ascii_alphabet_characters.at(i)] = i;
    }
    return encryption_key;
}

// map<int, char> decryption_key() {
//     map<int, char> decryption_key;
//     for (int i = 0; i < ascii_alphabet_characters.length(); i++) {
//         decryption_key[i] = ascii_alphabet_characters.at(i);
//     }
//     return decryption_key;
// }


string encrypt(string s, size_t rotation, map<char, int> key) {
    string encrypted {};

    for (auto c: s) {
        if (isalpha(c)) {
            int pos = (key[c] + rotation) % 52;
            encrypted += ascii_alphabet_characters.at(pos);
            // cout << c << " " << pos << " " << ascii_alphabet_characters.at(pos) << endl;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

string decrypt(string s, size_t rotation, map<char, int> key) {
    string decrypted {};

    for (auto c: s) {
        if (isalpha(c)) {
            int pos = (key[c] - rotation) % 52;
            decrypted += ascii_alphabet_characters.at(pos);
            // cout << c << " " << pos << " " << ascii_alphabet_characters.at(pos) << endl;
        } else {
            decrypted += c;
        }
    }
    return decrypted;
}

// int main()
// {
//     map<char, int> ek {encryption_key()};
//     // map<int, char> dk {decryption_key()};
//
//     string s {"I am studying Data Encryption"};
//     int rotation {4};
//
//     string encrypted = encrypt(s, rotation, ek);
//     cout << encrypted << endl;
//     string decrypted = decrypt(encrypted, rotation, ek);
//     cout << decrypted << endl;
//
//     return 0;
// }
