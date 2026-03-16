#include <iostream>
#include <string>
using namespace std;
#define sz(c) int((c).size())

bool palindrome(string& s)
{
  int i = 0, j = sz(s) - 1;
  while (i <= j) {
    if (s[i++] != s[j--])
      return false;
  }
  return true;
}

int main(int argc, char **argv)
{
  string s;
  int accm = 0;
  while (cin >> s) {
    if (palindrome(s))
      accm++;
  }
  cout << accm << endl;
  return 0;
}