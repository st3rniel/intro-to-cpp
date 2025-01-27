#include <iostream>
#include <vector>

using namespace std;

vector<int> change(int denomination, int cents) {
  vector<int> result;

  result.push_back(cents/denomination); // add count
  result.push_back(cents%denomination); // add reminder TODO also = cents - (denomination * (cents / denomination))

  return result;
}

int main() {
	cout << "Change Calculator" << endl;

	// cents per dollar denomination
    int one_dollar {100};
    int one_quarter {25};
    int one_dime {10};
    int one_nickel {5};
    int one_penny {1};
	vector<int> denominations {one_dollar, one_quarter, one_dime, one_nickel, one_penny};
	vector<string> denomination_names {"Dollars", "Quarters", "Dimes", "Nickels", "Pennies"};

	cout << "Enter an amount in cents: ";

	int cents {0}; // TODO rename to change_amount
	int cents_count {0};
	int cents_reminder {0};

	cin >> cents;
	cents_reminder = cents;

    cout << "You can provide this change as follows: " << endl;

	for (int i = 0; i < denominations.size(); i++) {
		vector<int> current_results = change(denominations.at(i), cents_reminder);
		cents_count = current_results.at(0);
		cents_reminder = current_results.at(1);
		cout << denomination_names.at(i) << ": " << cents_count << endl;
	}

    return 0;
}
