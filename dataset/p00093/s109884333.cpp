#include <iostream>

using namespace std;

int main() {
  int a, b;
  bool flag2 = false;
  while (cin >> a >> b) {
    if (a == 0 && b == 0) break;
    if (flag2) cout << endl;
    flag2 = true;

    bool flag = false;
    for (int i = a; i <= b; i++) {
      if (i % 400 == 0 || i % 100 && i % 4 == 0) {
        cout << i << endl;
        flag = true;
      }
    }
    if (!flag) cout << "NA" << endl;
  }

  return 0;
}