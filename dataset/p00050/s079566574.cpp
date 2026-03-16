#include <iostream>
#include <string>

using namespace std;

string s;

bool is(int i, char c) {
  return i < s.length() && s[i] == c;
}

int main() {
  getline(cin, s);
  for (int i = 0; i < s.length(); i++)
    if (is(i,'a') && is(i+1,'p') && is(i+2,'p') && is(i+3,'l') && is(i+4,'e')) {
      s[i] = 'p';
      s[i+1] = 'e';
      s[i+2] = 'a';
      s[i+3] = 'c';
      s[i+4] = 'h';
    } else if (is(i,'p') && is(i+1,'e') && is(i+2,'a') && is(i+3,'c') && is(i+4,'h')) {
      s[i] = 'a';
      s[i+1] = 'p';
      s[i+2] = 'p';
      s[i+3] = 'l';
      s[i+4] = 'e';
    }
  cout << s << endl;
  return 0;
}