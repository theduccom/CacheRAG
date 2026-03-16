#include <iostream>
using namespace std;
int main() {
  bool f = 0;
  int a, b;
  while (cin >> a >> b) {
    if (a == b && a == 0) break;
    if (f) cout << endl;
    for (f = 0; a <= b; a++) {
      if ((a % 4 == 0) && ((a % 100 != 0) || (a % 400 == 0))) {
        cout << a << endl;
        f = 1;
      }
    }
    if (!f) cout << "NA" << endl;
    f = 1;
  }
  return 0;
}