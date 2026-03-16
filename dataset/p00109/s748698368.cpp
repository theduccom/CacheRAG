#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;
pair<int64_t,int> expr(const string &s, int i);

pair<int64_t,int> num(const string &s, int i) {
  int64_t v = 0;
  while(i < s.size() && ('0' <= s[i] && s[i] <= '9')) {
    v *= 10;
    v += s[i] - '0';
    ++i;
  }
  return make_pair(v, i);
}

pair<int64_t,int> factor(const string &s, int i) {
  if (s[i] == '(') {
    auto p = expr(s, i+1);
    ++p.second;
    return p;
  } else {
    return num(s, i);
  }
}
pair<int64_t,int> term(const string &s, int i) {
  int64_t val;
  tie(val, i) = factor(s, i);
  while(i < s.size() && (s[i] == '*' || s[i] == '/')) {
    int64_t val2;
    int j;
    tie(val2, j) = factor(s, i+1);
    if (s[i] == '*') val *= val2;
    else val /= val2;
    i = j;
  }
  return make_pair(val, i);
}

pair<int64_t,int> expr(const string &s, int i) {
  int64_t val;
  tie(val, i) = term(s, i);
  while(s[i] == '+' || s[i] == '-') {
    int64_t val2;
    int j;
    tie(val2, j) = term(s, i+1);
    if (s[i] == '+') val += val2;
    else val -= val2;
    i = j;
  }
  return make_pair(val, i);
}

int main() {
  int n;
  cin>>n;
  REP(ds,n) {
    string s;
    cin>>s;
    cout << expr(s, 0).first << endl;
  }
  return 0;
}