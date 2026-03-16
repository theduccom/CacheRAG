#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    bool f = false;
    for (int i = 0; i < 10; i++) {
      if (n & (1 << i)) {
        if (f) cout << " ";
        cout << pow(2, i);
        f = true;
      }
    }
    cout << endl;
  }
}
