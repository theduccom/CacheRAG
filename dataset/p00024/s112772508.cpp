#include <cmath>
#include <iostream>
using namespace std;
int main() {
  double a;
  while (cin >> a) {
    cout << (ceil(4.9 * (a / 9.8) * (a / 9.8) / 5) + 1) << endl;
  }
  return 0;
}