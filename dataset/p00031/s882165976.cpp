#include <iostream>
using namespace std;
int main() {
  bool f;
  int n, i;
  while (cin >> n) {
    f = 0;
    for (i = 0; i < 10; i++) {
      if (n & 1 << i) {
        if (f) {
          cout << ' ';
        }
        cout << (1 << i);
        f = 1;
      }
    }
    cout << endl;
  }
  return 0;
}