#include <iostream>
#include <vector>
#include "scope/scope.h"
#include "scope_ii/scope_ii.h"
#include "basic_statistics/statistics.h"
#include "primes/first_n_primes.h"
#include "infinite_ternary/infinite_ternary.h"
#include "factorial/factorial.h"
#include "fibonacci/fibonacci.h"

using namespace std;

int main() {
    // scope(); // call faulty function
    // scope_ii(); // call function. WTF, how lol?!

    // infinite_ternary();

    // factorial();

    fibonacci(2);

    // int N {5};
    // cout << "Enter number of primes: ";
    // cin >> N;

    // vector<int> primes = first_n_primes(N);
    // for (auto prime : primes) {
    //     cout << prime << " ";
    // }

    /*
    vector<int> list {2, 1, 3};
    int element;

    cout << "Enter number of elements: ";
    cin >> N;

    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> element;
        list.push_back(element);
    }

    cout << "Mean: " << calculate_mean(list) << endl;
    cout << "Max: " << get_largest_number(list) << endl;
    cout << "Min: " << get_smallest_number(list) << endl;
    cout << "Range: " << calculate_range(list) << endl;
    */

    return 0;
}