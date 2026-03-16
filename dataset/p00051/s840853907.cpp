#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int n,a[8];
  string str;
  while(cin >> n) {
    getline(cin,str);
    for(int i=0;i<n;i++) {
      getline(cin,str);
      for(int j=0;j<8;j++) {
        a[j] = atoi(str.substr(j,1).c_str());
      }
      sort(a,a+8);
      int d = 10000000;
      int min=0,max=0;
      for(int j=0;j<8;j++) {
        min += a[j]*d;
        d/=10;
      }
      d=10000000;
      for(int j=0;j<8;j++) {
        max += a[7-j]*d;
        d/=10;
      }
      cout << max-min << endl;
    }
  }
}