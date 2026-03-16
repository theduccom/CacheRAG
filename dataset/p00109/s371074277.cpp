#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <string>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;

string lltostr(ll n) {
  // cout << "lltostr " << n << endl;
  stringstream ss;
  ss << n;
  return ss.str();
}

ll calc(string str) {
  // ©Á±ª êÎêÔOÌ©Á±ðÍ¸·
  int p = 0, s = 0;
  // cout << "before " << str << endl;
  REP(i,str.length()) {
    if (str[i] == '(') {
      p++;
      if (p==1)
        s = i;
    }
    if (str[i] == ')') {
      if (p==1) {
        string tmp = lltostr(calc(str.substr(s+1,i-s-1)));
        str = str.substr(0,s) + tmp + str.substr(i+1);
        i = s + tmp.length()-1;
      }
      p--;
    }
  }
  p = -1;
   // cout << "remove () " << str << endl;
  REP(i,str.length()) {
    char c = str[i];
    if (c=='*' || c=='/') {
      string a = str.substr(p+1,i-p-1);
      int q = i;
      string b;
      for(i++;i<str.length();i++) {
        if (i!=q+1 && !isdigit(str[i])) {
          b = str.substr(q+1,i-q-1);
          break;
        }
      }
      if (i == str.length())
        b = str.substr(q+1);
      string tmp;
      if (c=='*')
        tmp = lltostr(atoll(a.c_str()) * atoll(b.c_str()));
      else if (c=='/')
        tmp = lltostr(atoll(a.c_str()) / atoll(b.c_str()));
      str = str.substr(0,p+1) + tmp + str.substr(i);
      i = p + tmp.length();
    }
    if (!isdigit(str[i])) {
      p = i;
    }
  }
  // cout << "cal *|/ " << str << endl;
  p = -1;
  REP(i,str.length()) {
    char c = str[i];
    if (c=='+' || c=='-') {
      string a = str.substr(p+1,i-p-1);
      int q = i;
      string b;
      for(i++;i<str.length();i++) {
        if (i!=q+1 && !isdigit(str[i])) {
          b = str.substr(q+1,i-q-1);
          break;
        }
      }
      if (i == str.length())
        b = str.substr(q+1);
      string tmp;
      if (c=='+')
        tmp = lltostr(atoll(a.c_str()) + atoll(b.c_str()));
      else if (c=='-')
        tmp = lltostr(atoll(a.c_str()) - atoll(b.c_str()));
      str = str.substr(0,p+1) + tmp + str.substr(i);
      i = p + tmp.length();
    }
    if (!isdigit(str[i])) {
      p = i;
    }
  }
  // cout << "cal +|- " << str << endl;
  return atoll(str.c_str());
}

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while(n--) {
    string s;
    getline(cin,s);
    s = s.substr(0,s.length()-1);
    cout << calc(s) << endl;
  }
}