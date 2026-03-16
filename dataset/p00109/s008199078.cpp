#include <iostream>
#include <string>
using namespace std;
// const string S = "(1+1)*2";
string S;
int cur = 0;
int digit();
int number();
int factor();
int term();
int _term(int m);
int exp();
int _exp(int m);
int parse();
bool isdigit(char);
bool is_plu_min(char);
bool is_tim_div(char);
int main() {
  int N;
  cin >> N;
  for (int i=0;i<N;i++) {
    cin >> S;
    cur = 0;
    S.resize(S.size()-1);
    cout << parse() << endl;
  }
  return 0;
}
int digit() {
  int n = S[cur] - '0';
  cur++;
  return n;
}
int number() {
  int n = digit();
  while (cur < S.size() && isdigit(S[cur]))
    n = n*10 + digit();
  return n;
}
bool isdigit(char c) {
  if (c <= '9' and c >= '0') return true;
  else return false;
}
bool is_plu_min(char c) {
  if (c == '+' || c == '-') return true;
  else return false;
}
bool is_tim_div(char c) {
  if (c == '*' || c == '/') return true;
  else return false;
}
// exp    = term exp`
// exp`   = + term exp` | eps
// term   = factor term`
// term`  = * factor term` | eps
// factor = ( exp ) | num
int term() {
  int n = factor();
  return _term(n);
}
int _term(int m) {
  int n = m;
  switch (S[cur]) {
    case '*':
      cur++;
      n *= factor();
      return _term(n);
    case '/':
      cur++;
      n /= factor();
      return _term(n);
    default:
      return n;
  }
}
int factor() {
  if (S[cur] != '(') return number();
  else {
    cur++;
    int n = exp();
    cur++;
    return n;
  }
}
int exp() {
  int n = term();
  return _exp(n);
}
int _exp(int m) {
  int n = m;
  switch (S[cur]) {
    case '+':
      cur++;
      n += term();
      return _exp(n);
    case '-':
      cur++;
      n -= term();
      return _exp(n);
    default:
      return n;
  }
}
int parse() {
  return exp();
}