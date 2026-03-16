#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  for (int i = 0; i < s.length(); ++i) {
    if ('a' <= s[i] && s[i] <= 'z') {
      s[i] -= 32;
    }
  }
  cout << s << endl;
  return 0;
}