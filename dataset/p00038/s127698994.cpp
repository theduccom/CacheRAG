#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  string s[7] = {"null", "one pair", "two pair", "three card", "straight", "full house", "four card"};

  while (~scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4])) {
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < 4; ++i) {
      if (a[i] == a[i + 1]) {
        ans = 1;
        for (int j = i + 2; j < 5; ++j) {
          if (a[j] == a[j + 1]) ans = 2;
        }
        break;
      }
    }

    for (int i = 0; i < 3; ++i) {
      if (a[i] == a[i + 2]) ans = 3;
    }

    bool f = true;
    for (int i = 1; i < 5; ++i) {
      if (a[i] - 1 == a[i - 1]) continue;
      if (a[i - 1] == 1 && a[i] == 10) continue;
      f = false;
    }
    if (f) ans = 4;

    if (a[0] == a[1] && a[3] == a[4] && (a[1] == a[2] || a[2] == a[3])) ans = 5;

    if (a[0] == a[3] || a[1] == a[4]) ans = 6;

    cout << s[ans] << endl;
  }
}