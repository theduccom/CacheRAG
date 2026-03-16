#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int w;
    cin >> w;
    if (w == -1) return 0;
    cout << 4280 - (1150 + 125*min(10, max(w-10, 0)) + 140*min(10, max(w-20, 0)) + 160*max(w-30, 0)) << endl;
  }
}