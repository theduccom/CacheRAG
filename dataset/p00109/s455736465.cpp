#include <iostream>
#include <string>
#include <cctype>

using namespace std;

using si = string::const_iterator;
class ParseError {};

using ll = long long;
using ull = unsigned long long;

void cch(si &p, char exp) {
  if (*p != exp) {
    cerr << "expected '" << exp << "' but got '" << *p << "'" << endl;
    cerr << "rest: '";
    for (; *p; *p++) cerr << *p;
    cerr << "'" << endl;
    throw ParseError();
  }
  p++;
}

ll number(si &p) {
  ll ret = 0;
  for ( ; isdigit(*p); p++)
    ret = ret * 10 + (*p - '0');
  return ret;
}

ll expr(si &p);

ll factor(si &p) {
  if (*p == '(') {
    cch(p, '(');
    ll ret = expr(p);
    cch(p, ')');
    return ret;
  }
  return number(p);
}

ll term(si &p) {
  ll ret = factor(p);
  while (true) {
    if (*p == '*') {
        cch(p, '*');
        ret *= factor(p);
    } else if (*p == '/') {
        cch(p, '/');
        ret /= factor(p);
    } else break;
  }
  return ret;
}

ll expr(si &p) {
  ll ret = term(p);
  while (true) {
    if (*p == '+') {
        cch(p, '+');
        ret += term(p);
    } else if (*p == '-') {
        cch(p, '-');
        ret -= term(p);
    } else break;
  }
  return ret;
}

int main(void) {
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);

    si p = s.begin();
    ll ans = expr(p);
    cch(p, '=');
    cout << ans << endl;
  }
}

