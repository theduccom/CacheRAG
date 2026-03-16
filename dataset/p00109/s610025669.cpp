#include <cstring>
#include <cctype>
#include <iostream>
#include <cstdio>
using namespace std;

int exp(char* & p);

int num(char* & p) {
    int ret = 0;
    while (isdigit(*p)) {
        ret *= 10;
        ret += *p - '0';
        p++;
    }
    return ret;
}

int fac(char* & p) {
    int ret = 0;
    if (*p == '(') {
        p++;
        ret += exp(p);
        p++;
    } else {
        ret += num(p);
    }
    return ret;
}

int term(char* & p) {
    int ret = fac(p);
    while(1) {
        if (*p == '*') {
            p++;
            ret *= fac(p);
        } else if (*p == '/') {
            p++;
            ret /= fac(p);
        } else {
            break;
        }
    }
    return ret;
}

int exp(char* & p) {
    int ret = term(p);
    while(1) {
        if (*p == '+') {
            p++;
            ret += term(p);
        } else if (*p == '-') {
            p++;
            ret -= term(p);
        } else break;
    }
    return ret;
}

int eval(const string & s){
    char* p = (char*)s.c_str();
    return exp(p);
}

int eval(const char* str){
    char* p = (char*)str;
    return exp(p);
}

using namespace std;

int main(){
  int n; cin >> n;
  cin.ignore();
  while(n--){
    char str[128];
    gets(str);
    cout << eval(str) << endl;
  }
  return 0;
}