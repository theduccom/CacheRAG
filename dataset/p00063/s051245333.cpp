#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string str;
  int c = 0;
  while (cin >> str) {
    cin.ignore();
    string S, R;
    S = str.substr(0, str.size() / 2);
    if (str.size() % 2 == 0) {
      R = str.substr(str.size() / 2, str.size() / 2);
    } else {
      R = str.substr(str.size() / 2 + 1, str.size() / 2);
    }
    reverse(R.begin(), R.end());
    if (S == R) {c++;}
  }
  printf("%d\n", c);
  return 0;
}