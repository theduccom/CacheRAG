#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int line = 0;
  string s;
  bool flag;
  while (cin >> s) {
    flag = true;
    for (int i = 0; i < s.size()/2; i++) {
      if (s[i] != s[s.size()-1-i]) {
        flag = false;
        break;
      }
    }

    if (flag) {
      line++;
    }
  }

  cout << line << endl;

  return 0;
}