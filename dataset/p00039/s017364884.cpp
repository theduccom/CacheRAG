#include <iostream>
#include <string>
#include <map>
using namespace std;
#define sz(c) int((c).size())

int parse(map<char, int>& m, string& s)
{
  int i, res, cur, next;
  res = 0;
  if (sz(s) == 1)
    return m[s[i]];
  for (int i = 0; i < sz(s) - 1; i++) {
    cur = m[s[i]]; next = m[s[i+1]];
    if (cur < next)
      res -= cur;
    else
      res += cur;
  }
  res += next;
  return res;
}

int main(int argc, char **argv)
{
  string s;
  map<char, int> m;
  m['I'] = 1;
  m['V'] = 5;
  m['X'] = 10;
  m['L'] = 50;
  m['C'] = 100;
  m['D'] = 500;
  m['M'] = 1000;

  for (;;) {
    cin >> s;
    if (cin.eof())
      break;
    cout << parse(m, s) << endl;
  }

  return 0;
}