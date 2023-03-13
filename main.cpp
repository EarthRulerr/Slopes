#include <iostream>
#include "typography.hpp"
#include <algorithm>
using namespace std;
int main() {
  int x1, x2, y1, y2, s1, s2, s;
  int loop = 1;
  cout << underline << "Format: X1 Y1 X2 Y2" << reset << endl;
  while(loop = 1) {
    cout << "-------------------------" << endl;
  cout << "Line: ";
  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;
  s1 = y2-y1;
  s2 = x2-x1;
    cout << endl << "Line: " << "(" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ")";
    cout << endl << blue << bold << "Formula:" << reset;
    cout << endl << "y2 - y1";
    cout << endl << "-------";
    cout << endl << "x2 - x1";
    cout << endl << blue << bold << "Solve:" << reset;
    cout << endl << y2 << " - " << y1;
    cout << endl << "-------";
    cout << endl << x2 << " - " << x1;
    cout << endl << blue << bold << "Slope:" << reset;
    cout << __gcd(s1, s2);
  cout << endl << s1 << endl << "--" << endl << s2 << endl;
    cout << bold << blue << "Simplify:" << reset << endl;
    cout << __gcd(s1, s2) << endl << "--" << endl << __gcd(s2, s1) << endl;
    }
}
