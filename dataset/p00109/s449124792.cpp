#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>

const char *p;
class ParseError {};

int expression();
int term();
int factor();
void consume(char);

int main() {
  using namespace std;

  int n;
  string str;
  int ans;

  cin >> n;
  cin.ignore();
  for(int i = 0; i < n; i++) {
    getline(cin, str);
    p = str.c_str();
    ans = expression();
    consume('=');
    cout << ans << endl;
  }
  
  return 0;
}

void consume(char expected) {
  if(*p == expected) {
    p++;
  } else {
    std::cerr << "Expected '" << expected << "' but got '" << *p << "'" << std::endl;
    std::cerr << "Rest string is '";
    while(*p) {
      std::cerr << *p++;
    }
    std::cerr << "'" << std::endl;
    throw ParseError();
  }
}

int factor() {
  int ret;
  char *e;
  
  if(*p == '(') {
    consume('(');
    ret = expression();
    consume(')');
  } else {
    ret = strtol(p, &e, 10);
    p = e;
  }
  
  return ret;
}

int term() {
  int ret = factor();
  
  for(;;) {
    if(*p == '*') {
      p++;
      ret *= factor();
    } else if (*p == '/') {
      p++;
      ret /= factor();
    } else {
      break;
    }
  }

  return ret;
}

int expression() {
  int ret = term();
  
  for(;;) {
    if(*p == '+') {
      p++;
      ret += term();
    } else if (*p == '-') {
      p++;
      ret -= term();
    } else {
      break;
    }
  }
  
  return ret;
}