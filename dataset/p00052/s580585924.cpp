#include <iostream>
using namespace std;
int main() {
  int n;
  while (cin >> n, n) {
    int c, r, b;
    for (c = 0, r = 1, b = 0; n; c += (n % 5) * b, n /= 5, b += r, r *= 5)
      ;
    cout << c << endl;
  }
}