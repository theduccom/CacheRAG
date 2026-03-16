#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double a, s;
  while (cin >> a) {
    s = a;
    for (int i = 2; i <= 10; i++)
      if (i & 1) s += (a /= 3);
      else s += (a *= 2);
    cout << fixed << setprecision(8) << s << endl;
  }
}