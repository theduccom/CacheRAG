#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main() {
  string str;
  int num = 0;
  int a = 0, b = 0, o = 0, ab = 0;
  while(cin >> num >> str) {
    if(str == ",A") {
      a++;
    }else if(str == ",B") {
      b++;
    }else if(str == ",O") {
      o++;
    }else if(str == ",AB") {
      ab++;
    }
  }

  cout << a << endl;
  cout << b << endl;
  cout << ab << endl;
  cout << o << endl;
  return 0;
}