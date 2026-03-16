#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x, h;
  double s;

  while (1) {
    cin >> x >> h;
    if (!x && !h) break;
    s = x*x + 2*x*sqrt(h*h+x*x/4.0);
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << s << endl;
  }
  return 0;
}