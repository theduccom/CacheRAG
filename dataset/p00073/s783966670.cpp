#include <bits/stdc++.h>
using namespace std;

int main() {
  double x, h;
  while (cin >> x >> h) {
    if (x == 0 && h == 0) break;
    cout << fixed << setprecision(8)
         << x * x + x * hypot(h, x / 2) * 2 << "\n";
  }
}
