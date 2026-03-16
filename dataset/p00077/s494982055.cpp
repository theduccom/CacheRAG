#include <iostream>
using namespace std;

int main() {
  int n = 1;
  char c;
  while (cin.get(c)) {
    if (c == '@') {
      cin >> c;
      n = c - '0';
      continue;
    }
    for (int i=0; i<n; i++) {
      cout << c;
    }
    n=1;
  }
  return 0;
}