#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  char s[3], _;
  int a = 0, b = 0, ab = 0, o = 0;
  while (scanf("%d,%s", &_, &s) != EOF) {
    if (s[0] == 'A' && s[1] == 'B') ab++;
    else if (s[0] == 'A') a++;
    else if (s[0] == 'B') b++;
    else o++;
  }
  cout << a << endl;
  cout << b << endl;
  cout << ab << endl;
  cout << o << endl;
  return 0;
}