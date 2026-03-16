#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  while (n--) {
    string s; cin >> s;
    sort(begin(s), end(s));
    string l = s;
    sort(begin(s), end(s), greater<int>());
    string r = s;
    cout << stoi(r) - stoi(l) << endl;
  }
  return 0;
}

