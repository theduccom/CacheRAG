#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b, total = 0, amtotal = 0, am = 0;
  char c;
  while (cin >> a >> c >> b) {
    total += a * b;
    amtotal += b;
    am++;
  }
  cout << total << endl
    << (int) (round(amtotal / (double) am)) << endl;
}