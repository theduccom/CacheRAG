#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isPali(const string &s) {
  for(int i = 0; i < s.size()-1-i; ++i) {
    if(s[i] != s[s.size()-1-i]) return false;
  }
  return true;
}

int main() {
  string s;
  int ans = 0;
  while(cin >> s) {
    ans += isPali(s);
  }
  cout << ans << endl;
  return 0;
}