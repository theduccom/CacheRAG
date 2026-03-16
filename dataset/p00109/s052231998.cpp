#include<string>
#include<iostream>
#include<cctype>
using namespace std;
typedef string::const_iterator State;

int number(State &begin) {
  int ans = 0;
  bool flag = false;
  if (*begin == '-') flag = true, begin++;
  while (isdigit(*begin)) ans = ans * 10 + (*begin - '0'), begin++;
  if (flag) ans = -ans;
  return ans;
}

int expression(State &begin);

int factor(State &begin) {
  int ans;
  if (*begin == '(') begin++, ans = expression(begin), begin++;
  else ans = number(begin);
  return ans;
}

int term(State &begin) {
  int ans = factor(begin);
  while (1) {
    if (*begin == '*') begin++, ans *= factor(begin);
    else if (*begin == '/') begin++, ans /= factor(begin);
    else return ans;
    //begin++;
  }
}

int expression(State &begin) {
  int ans = term(begin);
  while (1) {
    if (*begin == '+') begin++, ans += term(begin);
    else if (*begin == '-') begin++, ans -= term(begin);
    else return ans;
    //begin++;
  }
}

int main() {
  int n;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    State temp = s.begin();
    cout << expression(temp) << endl;
  }
}

