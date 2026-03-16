#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int pos;
string str;

int exp();

int factor() {
  if(str[pos] >= '0' && str[pos] <= '9') {
    string tmp = "";
    while(str[pos] >= '0' && str[pos] <= '9') {
      tmp += str[pos++];
    }
    return atoi(tmp.c_str());
  }

  if(str[pos] == '(') {
    pos++;
    int tmp = exp();
    pos++;
    return tmp;
  }
}

int term() {
  int x = factor();
  while(str[pos] == '*' || str[pos] == '/') {
    if(str[pos] == '*') {
      pos++;
      x *= factor();
    } else if(str[pos] == '/') {
      pos++;
      x /= factor();
    }
  }
  return x;
}

int exp() {
  int x = term();
  while(str[pos] == '+' || str[pos] == '-') {
    if(str[pos] == '+') {
      pos++;
      x += term();
    } else if(str[pos] == '-') {
      pos++;
      x -= term();
    }
  }
  return x;
}

main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    pos = 0;
    cin >> str;
    str = str.substr(0, str.length()-1);
    cout << exp() << endl;
  }
}