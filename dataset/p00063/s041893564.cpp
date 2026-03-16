#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int cnt = 0;
  while (cin >> s) {
    string r = s;
    reverse(r.begin(), r.end());
    if (r == s) {
      cnt++;
    }
  }
  cout << cnt << endl;
}
