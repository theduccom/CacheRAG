#include <iostream>
#include <cstdlib>
using namespace std;
 
int main() {
  string str;
  int size,count = 1,ans = 0,xx[100] = {0};
  char x[100];
  while(cin >> str) {
    char x[100] = {' '};
    int xx[100] = {0};
    size = str.size();
    for(int i=0;i<size;i++) {
      x[i] = *str.substr(i,1).c_str();
      if(x[i] == 'I') {
        xx[i] = 1;
      }
      else if(x[i] == 'V') {
        xx[i] = 5;
      }
      else if(x[i] == 'X') {
        xx[i] = 10;
      }
      else if(x[i] == 'L') {
        xx[i] = 50;
      }
      else if(x[i] == 'C') {
        xx[i] = 100;
      }
      else if(x[i] == 'D') {
        xx[i] = 500;
      }
      else if(x[i] == 'M') {
        xx[i] = 1000;
      }
    }
 
    for(int i=0;i<size-1;i++) {
      if(xx[i] >= xx[i+1]) {
        ans += xx[i];
        if(i == size-2) {
          ans += xx[i+1];
        }
      }
      else if(xx[i] < xx[i+1]) {
        ans -= xx[i];
 
        if(i == size-2) {
          ans += xx[i+1];
        }
      }
    }
    if(size == 1) {
      ans += xx[0];
        }
    cout << ans << endl;
    ans = 0;
  }
}