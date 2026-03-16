#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int w;
  while (true) {
    int x = 1150;
    cin >> w;
    if (w < 0) {
      return 0;
    }
    w -= 10;
    if (w > 0) {
      x += 125 * min(10, w);
    }
    w -= 10;
    if (w > 0) {
      x += 140 * min(10, w);
    }
    w -= 10;
    if (w > 0) {
      x += 160 * w;
    }
    cout << 4280 - x << endl;
  }
}