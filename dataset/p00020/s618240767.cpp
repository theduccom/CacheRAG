#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  for(int i = 0; i < s.size(); i++) {
    if('a' <= s[i] && s[i] <= 'z') {
      printf("%c", s[i]+('A'-'a'));
    } else {
      printf("%c", s[i]);
    }
  }
  cout << endl;
}