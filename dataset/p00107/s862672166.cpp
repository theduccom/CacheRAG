#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  while (cin >> a >> b >> c, a) {
    double cheese = min({a * a + b * b, a * a + c * c, b * b + c * c});
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
      int r;
      cin >> r;
      cout << ((4 * r * r <= cheese) ? "NA" : "OK") << endl;
    }
  }
}
