#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x,h;
  double S;
  while(cin >> x >> h) {
    if((x==0)&&(h==0)) break;
    S = (double) x * x + (double) x * sqrt(h*h+x*x/4.0) / 2.0 * 4.0;
    printf("%.6f\n",S);
  }
}