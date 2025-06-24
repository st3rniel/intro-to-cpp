//
// Created by Martin Oywa on 08/05/2025.
//
#include <iostream>

using namespace std;

int scope() {
  cout << "This is from scope.cpp" << endl;

  int arg1;
  arg1 = -1;

  int x, y, z;
  char myDouble = '5';
  char arg1 = myDouble; // compiler error expected
  cout << arg1 << endl;
  return 0;
}