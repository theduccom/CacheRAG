#include <bits/stdc++.h>
using namespace std;

int main() {
  int w;
  while (cin >> w, w != -1) {
    int c = 1150;
    if (w > 30) {
      c += (w - 30) * 160 + 2650;
    } else if (w > 20) {
      c += (w - 20) * 140 + 1250;
    } else if (w > 10) {
      c += (w - 10) * 125;
    }
    cout << 4280 - c << "\n";
  }
}
