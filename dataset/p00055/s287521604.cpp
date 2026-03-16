#include <iostream>
#include <cstdio>
using namespace std;
int main(void) {
  double a[11], s;
  
  while(cin >> a[1]) {
    s = 0;
    for(int i = 2 ; i < 11 ; i++) {
      a[i] = 0;
    }
    for(int i = 2 ; i < 11 ; i++) {
      if(i % 2 == 1) {
	a[i] = a[i-1] / 3;
      }
      else if(i % 2 == 0) {
	a[i] = 2 * a[i-1];
      }
    }
    for(int i = 1 ; i < 11 ; i++) {
      s += a[i];
    }
    printf("%.8f\n", s);
  }
  return 0;
}