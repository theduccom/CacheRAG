#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

string s;
int p;

int expr();

int num() {
  int res = 0;
  while (p < s.size() && '0' <= s[p] && s[p] <= '9') {
    res *= 10;
    res += s[p] - '0';
    p++;
  }
  return res;
}

int factor() {
  int res = 0;
  if (s[p] == '(') {
    p++;
    res = expr();
    p++;
  } else {
    res = num();
  }
  return res;
}

int term() {
  int res = factor();
  while (p < s.size()) {
    if (s[p] == '*') {
      p++;
      res *= factor();
    } else if (s[p] == '/') {
      p++;
      res /= factor();
    } else {
      break;
    }
  }
  return res;
}

int expr() {
  int res = term();
  while (p < s.size()) {
    if (s[p] == '+') {
      p++;
      res += term();
    } else if (s[p] == '-') {
      p++;
      res -= term();
    } else {
      break;
    }
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  REP(i, n) {
    cin >> s;
    p = 0;
    cout << expr() << endl;
  }
}

