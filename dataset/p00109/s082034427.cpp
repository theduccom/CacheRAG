#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

string s;
string::iterator p;

int fact();
int term();
int exp();

int fact() {
  int x;
  string num;
  while(isdigit(*p)) {
    num += *p;
    ++p;
  }
  if(num.size()) {
    x = atoi(num.c_str());
  } else {
    ++p;
    x = exp();
    ++p;
  }
  return x;
}

int term() {
  int x = fact();
  while(*p == '*' || *p == '/') {
    if(*p == '*') {
      ++p;
      x *= fact();
    } else {
      ++p;
      x /= fact();
    }
  }
  return x;

}

int exp() {
  int x = term();
  while(*p == '+' || *p == '-') {
    if(*p == '+') {
      ++p;
      x += term();
    } else {
      ++p;
      x -= term();
    }
  }
  return x;
}

int main() {
  int n;
  cin >> n;
  while(n--) {
    cin >> s;
    p = s.begin();
    cout << exp() << endl;
  }
  return 0;
}