#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  while (cin >> s) {
    string ans;
    for (int i = 0; i < s.size(); i++) {
      if (s.at(i) == '@') {
        int n = s.at(i + 1) - '0';
        for (int j = 0; j < n; j++) {
          ans += s.at(i + 2);
        }
        i += 2;
      } else {
        ans += s.at(i);
      }
    }
    cout << ans << endl;
  }
}

