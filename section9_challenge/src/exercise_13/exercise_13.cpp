//
// Created by Martin Oywa on 02/02/2025.
//
#include <iostream>

using namespace std;

string day_of_the_week(int day_code) {

    switch (day_code) {
        case 0:
           return "Sunday";
        break;
        case 1:
           return "Monday";
        break;
        case 2:
           return "Tuesday";
        break;
        case 3:
           return "Wednesday";
        break;
        case 4:
           return "Thursday";
        break;
        case 5:
           return "Friday";
        break;
        case 6:
           return "Saturday";
        break;
        default:
           return "Error - illegal day code";
    }
}