//
// Created by Martin Oywa on 02/02/2025.
//
# include <iostream>

using namespace std;

string can_drive(int age, bool has_car) {
    if (age < 16) {
        return "Sorry, come back in " + to_string(16 - age)  + " years and be sure you own a car when you come back.";
    } else if (age >= 16 && has_car == false) {
        return "Sorry, you need to buy a car before you can drive!";
    } else if (age >= 16 && has_car == true) {
        return "Yes - you can drive!";
    }
}
