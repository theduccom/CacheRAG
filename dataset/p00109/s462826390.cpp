#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
const ld eps = 1e-9;
const ll MOD = 1000000007;
const int INF = 1000000000;
const ll LINF = 1ll<<50;
template<typename T>
void printv(const vector<T>& s) {
  for(int i=0;i<(int)(s.size());++i) {
    cout << s[i];
    if(i == (int)(s.size())-1) cout << endl;
    else cout << " ";
  }
}
template<typename T1, typename T2>
ostream& operator<<(ostream &os, const pair<T1, T2> p) {
  os << p.first << ":" << p.second;
  return os;
}
using State = string::const_iterator;
class ParseError {};
int expr(State &begin);
int term(State &begin);
int factor(State &begin);
int number(State &begin);
int expr(State &begin) {
  int ret = term(begin);
  if(*begin == '=') return ret;
  while(1) {
    if(*begin == '+') {
      begin++;
      ret += term(begin);
    } else if(*begin == '-') {
      begin++;
      ret -= term(begin);
    } else {
      break;
    }
  }
  return ret;
}
int term(State &begin) {
  int ret = factor(begin);
  if(*begin == '=') return ret;
  while(1) {
    if(*begin == '*') {
      begin++;
      ret *= factor(begin);
    } else if(*begin == '/') {
      begin++;
      ret /= factor(begin);
    } else {
      break;
    }
  }
  return ret;
}
int factor(State &begin) {
  int ret = 0;
  if(*begin == '=') return ret;
  if(*begin == '(') {
    begin++;
    ret = expr(begin);
    begin++;
  } else {
    ret = number(begin);
  }
  return ret;
}
int number(State &begin) {
  int ret = 0;
  if(*begin == '=') return ret;
  while(isdigit(*begin)) {
    ret *= 10;
    ret += *begin - '0';
    begin++;
  }
  return ret;
}
int main() {
  int n; cin >> n;
  cin.ignore();
  for(int i=0;i<n;++i) {
    string s;
    getline(cin, s);
    State begin = s.begin();
    int ans = expr(begin);
    cout << ans << endl;
  }
}

