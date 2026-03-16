#include <bits/stdc++.h>

#define stirng string
#define vvi vector<vector<int>>
#define vi vector<int>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int inf = 1e9 + 7;

/*int main() {
  string a;
  cin >> a;
  string s = "";
  for (int i = 0; i < 10; i++) {
    s += a[i];
  }
  for (int i = 0; i < 44; i++) {
    int t = s[0 + i] - '0';
    int u = s[1 + i] - '0';
    s += (t + u) % 10 + '0';
  }
  cout << s[54] << endl;
  return 0;
}*/
int main() {
  int a, b;
  int p = 1;
  while (cin >> a >> b && a != 0 && b != 0) {
    if (p == 0) {
      cout << endl;
    }
    p = 0;
    int flag = 1;
    for (int i = a; i <= b; i++) {
      if (i % 100 == 0 && i % 400 != 0) {
        // continue;
      } else if (i % 4 == 0 && i % 100 != 0) {
        cout << i << endl;
        flag = 0;
      } else if (i % 400 == 0) {
        cout << i << endl;
        flag = 0;
      } else {
        // continue;
      }
    }
    if (flag) {
      cout << "NA" << endl;
    }
  }
  return 0;
}

