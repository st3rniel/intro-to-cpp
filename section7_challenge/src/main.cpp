#include <iostream>
#include <vector>

using namespace std;

void show_elements(vector<int> v) {
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void show_elements_2d(vector<vector<int>> v) {
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.at(i).size(); j++) {
            cout << v.at(i).at(j) << " ";
        }
    }
    cout << endl;
}

int main()
{
    // Declare 2 vectors
    vector<int> vector1;
    vector<int> vector2;

    // Add to vector 1
    vector1.push_back(10);
    vector1.push_back(20);

    // Display vector 1 elements
    show_elements(vector1);
    cout << "Size of vector1: " << vector1.size() << endl;

    // Add to vector 2
    vector2.push_back(100);
    vector2.push_back(200);

    // Display vector 2 elements
    show_elements(vector2);
    cout << "Size of vector2: " << vector2.size() << endl;

    // Declare a 2D vector
    vector <vector<int>> vector_2d;

    // Push vectors 1 and 2 into it
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    show_elements_2d(vector_2d);

    // ETC
    vector1.at(0) = 1000;

    show_elements_2d(vector_2d);
    show_elements(vector1);

    return 0;
}
