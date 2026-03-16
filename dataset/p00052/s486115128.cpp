#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  while(cin >> n && n) {
    int two, five, tmp;
    tmp = n; two = 0;
    while(tmp >= 2) {
      two += tmp / 2;
      tmp /= 2;
    }
    tmp = n; five = 0;
    while(tmp >= 5) {
      five += tmp / 5;
      tmp /= 5;
    }
    cout << min(two, five) << endl;
  }
  return 0;
}