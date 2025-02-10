#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool handle_empty_vector(vector<int> vec) {
    return vec.empty();
}

bool will_cause_duplicates(vector<int> vec, int input) {
    /* for (auto i: vec) {
        if (i == input) {
            return true;
        }
    }

    return false; */

    return *ranges::find(vec, input);
}

double calculate_mean(vector<int> vec) {
    double sum = 0;

    for (auto i : vec) {
        sum += i;
    }

    return sum / vec.size();
}

int get_smallest_number(vector<int> vec) {
    /** int smallest = vec.at(0);

    for (auto i : vec) {
        if (i < smallest) {
            smallest = i;
        }
    }
    return smallest; **/

    return *ranges::min_element(vec);
}

int get_largest_number(vector<int> vec) {
    return *ranges::max_element(vec);
}

int main() {
    char choice {};
    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8};
    // vector<int> vec {};

    do {
        // cout << '--------------------------' << endl;
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear the list" << endl;
        cout << "Q - Quit" << endl;

        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 'P' || choice == 'p') {
            if (handle_empty_vector(vec)) {
                cout << "[] - the list is empty" << endl;
                choice = 'Q';
            } else {
                cout << "[ ";
                for (auto i : vec) {
                    cout << i << " ";
                }
                cout << "]" << endl;
            }
        } else if (choice == 'A' || choice == 'a') {
            int input {};
            cout << "Enter a number: ";
            cin >> input;
            if (will_cause_duplicates(vec, input)) {
                cout << input << " is a duplicate. Try another number." << endl;
            } else {
                vec.push_back(input);
                cout << input << " added" << endl;
            }
        } else if (choice == 'M' || choice == 'm') {
            if (handle_empty_vector(vec)) {
                cout << "Unable to calculate the mean - no data" << endl;
                choice = 'Q';
            } else {
                cout << "Mean is " << calculate_mean(vec) << endl;
            }
        } else if (choice == 'S' || choice == 's') {
            if (handle_empty_vector(vec)) {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            } else {
                cout << "Smallest number is " << get_smallest_number(vec) << endl;
            }
        } else if (choice == 'L' || choice == 'l') {
            if (handle_empty_vector(vec)) {
                cout << "Unable to determine the largest number - list is empty" << endl;
            } else {
                cout << "Largest number is " << get_largest_number(vec) << endl;
            }
        } else if (choice == 'C' || choice == 'c') {
            vec.clear();
        } else if (choice == 'Q' || choice == 'q') {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Invalid choice. Please try again..." << endl;
        }

    } while (choice != 'Q' && choice != 'q');


    return 0;
}
