#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, i;
  string a, b;
  bool f;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (b.size() > a.size()) a.swap(b);
    for (i = f = 0; i < a.size(); i++) {
      int n = (a[i] - '0') + f;
      if (i < b.size()) n += b[i] - '0';
      a[i] = (n % 10) + '0';
      f = n > 9;
    }
    if (f) a += "1";
    reverse(a.begin(), a.end());
    if (a.size() > 80) {
      cout << "overflow" << endl;
    } else {
      cout << a << endl;
    }
  }
  return 0;
}