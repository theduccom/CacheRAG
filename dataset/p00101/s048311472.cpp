#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  int n;
  cin >> n;
  string str;
  getline(cin, str);
  rep (iii, n) {
    getline(cin, str);
    rep (i, str.size() - 6) {
      if (str.substr(i, 7) == "Hoshino") str[i + 6] = 'a';
    }
    cout << str << endl;
  }
  return 0;
}