#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, k;
  int count[10];
  while (true) {
    cin >> n;
    if (n == 0) {
      return 0;
    }
    for (int i = 0; i < 10; ++i) {
      count[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
      cin >> k;
      ++count[k];
    }
    for (int i = 0; i < 10; ++i) {
      if (count[i] == 0) {
        cout << "-" << endl;
      } else {
        cout << string(count[i], '*') << endl;
      }
    }
  }
}