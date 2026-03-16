#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  double b[11];
  while(cin >> b[1]) {
    for(int i = 2; i <= 10; ++i) {
      if(i % 2 == 0) b[i] = b[i-1] * 2.0;
      else b[i] = b[i-1] / 3.0;
    }
    double s = 0.0;
    for(int i = 1; i <= 10; ++i) s += b[i];
    printf("%.10f\n", s);
  }
  return 0;
}