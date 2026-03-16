#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
  double y, v, t;
  double N;
  
  while(cin >> v) {
    t = v / 9.8;
    y = 4.9 * t * t;
    
    N =  y / 5 + 1 + 0.5;

    printf("%.0f\n", N);
  }
  return 0;
}