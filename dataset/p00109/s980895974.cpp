#include<iostream>
#include<string>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
typedef int number;

int c;
string str;

number Z();
number Expr();
number Factor();
number Term();
number Num();

void debug(string str) {
//  cout << str << endl;
}

number Z() {
  debug("Z: " + str.substr(c));
  number ans = Expr();
  c++; // read =
  debug("Z(" + to_string(ans) + "): " + str.substr(c));
  return ans;
}

number Expr() {
  debug("Expr: " + str.substr(c));
  number val = Factor();
  int p;
  while (p = c, (str[p] == '+' || str[p] == '-')) {
    if (str[c] == '+') {
      c++; // read +
      number expr = Expr();
      val += expr;
    } else {
      // c++; // read -
      number expr = Expr();
      // val -= expr;
      val += expr;
    }
  }
  debug("Expr(" + to_string(val) + "): " + str.substr(c));
  return val;
}

number Factor() {
  debug("Factor: " + str.substr(c));
  number val = Term();
  int p;
  while (p = c, (str[p] == '*' || str[p] == '/')) {
    if (str[c] == '*') {
      c++; // read *
      number factor = Term();
      val *= factor;
    } else {
      c++; // read /
      number factor = Term();
      val /= factor;
    }
  }
  debug("Factor(" + to_string(val) + "): " + str.substr(c));
  return val;
}

number Term() {
  debug("Term: " + str.substr(c));
  if (str[c] == '-') {
    c++; // read -
    number term = Term();
    return -term;
  } else if (str[c] == '(') {
    c++; // read (
    number expr = Expr();
    c++; // read )
    return expr;
  } else {
    number num = Num();
    return num;
  }
}

number Num() {
  debug("Num: " + str.substr(c));
  number val = 0;
  while (isdigit(str[c])) {
    val = val * 10 + (str[c] - '0');
    c++;
  }
  debug("Num(" + to_string(val) + "): " + str.substr(c));
  return val;
}

int main() {
  int n;
  cin >> n;
  REP(i, n) {
    c = 0;
    cin >> str;
    cout << Z() << endl;
  }
}