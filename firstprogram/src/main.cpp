#include <iostream>

using namespace std;

int main() {
    int favorite_number;

    cout << "Enter your favorite number between 1 and 100: ";   // << insertion operator
    cin >> favorite_number;     // extraction operator
    cout << "Awesome! That's mine too!" << endl;

    return 0;
}