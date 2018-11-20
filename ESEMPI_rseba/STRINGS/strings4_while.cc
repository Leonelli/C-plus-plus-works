//  Example 7.4, page 190
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

using namespace std;
#include <iostream>
const int DIM=80;

int main()
{
  char line[DIM];
  while (cin.getline(line, DIM)) {
    cout << "\t[" << line << "]\n";
  };
  return 0;
}
