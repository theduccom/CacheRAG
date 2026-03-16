#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int n;
    cin >> n;
    if (!n) return 0;
    int r = 0, d = 0;
    for (int i = 0; i < n; i++) {
      int p, d1, d2;
      cin >> p >> d1 >> d2;
      if (d < d1 + d2) {
        d = d1 + d2;
        r = p;
      }
    }
    cout << r << ' ' << d << endl;
  }
}