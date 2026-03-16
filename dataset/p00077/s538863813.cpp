#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(10);
  
  string s;
  while (cin >> s) {
    int sz = s.size(), now = 0;
    while (now < sz) {
      if (s[now] == '@') {
        int t = s[++now] - '0';
        char ch = s[++now];
        for (int i = 0; i < t; i++) {
          cout << (char)ch;
        }
      } else {
        cout << s[now];
      }
      now++;
    }
    cout << endl;
  }

  return 0;
}
