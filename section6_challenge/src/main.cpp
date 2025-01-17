#include <iostream>

using namespace std;

int main() {
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax_rate {0.06};
    const int estimate_days {30};

    cout << "Martin's Carpet Cleaning Service" << endl;
    cout << "Charges:" << endl;
    cout << "\t$" << price_per_small_room << " per small room" << endl;
    cout << "\t$" << price_per_large_room << " per large room" << endl;
    cout << "Sales tax rate is " << sales_tax_rate*100 << "%" << endl;
    cout << "Estimates are valid for " << estimate_days << " days" << endl;

    cout << "\n=============================" << endl;

    cout << "Enter number of small rooms: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "Enter number of large rooms: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    cout << "\n=============================" << endl;

    const double total_price_per_small_room {price_per_small_room * number_of_small_rooms};
    const double total_price_per_large_room {price_per_large_room * number_of_large_rooms};
    cout << "Total cost for small rooms: $" << total_price_per_small_room << endl;
    cout << "Total cost for large rooms: $" << total_price_per_large_room << endl;

    const double total_cost {total_price_per_small_room + total_price_per_large_room};
    cout << "Total Cost: $" << total_cost << endl;

    const double tax {total_cost * sales_tax_rate};
    cout << "Tax: $" << tax << endl;

    cout << "\n=============================" << endl;

    cout << "Total Cost Estimate: $" << total_cost + tax << endl;
    cout << "This estimate is valid for " << estimate_days << " days" << endl;

    return 0;
}
