#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

typedef complex<double> P;
const double PI = acos(-1);

int main() {  
  P p;
  P dir(0, 1.0);

  for(;;) {
    int x, y;
    scanf("%d,%d", &x, &y);
    if( x == 0 && y == 0 ) break;
    p += dir * (double)x;
    dir *= polar(1.0, -y / 180.0 * PI);    
  }
  
  printf("%d\n%d\n", (int)p.real(), (int)p.imag());
  
}