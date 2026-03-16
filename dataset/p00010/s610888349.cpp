#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double a, b, c, d, e, f;
double x, y;

double RoundNumber(double f) {
  int tf = (int)(10000 * f);
  if (tf % 10 >= 5) {
    tf += 10;
  }
  tf /= 10;
  return (double)tf / 1000.0f;
}

void solve(){
  /*
  double tmp1 = f-(c*d/a);
  double tmp2 = e-(b*d/a);
  y = tmp1/tmp2;
  x = (c - b * y) / a;
  */
  x = (c*e-b*f) / (a*e-b*d);
  y = (c*d-a*f) / (b*d-a*e);
  printf("%.3f %.3f ", RoundNumber(x), RoundNumber(y));        
}

int main(int argc, char const* argv[]) {
  int n;
  cin>>n;
  for (int i = 0; i < n; i += 1) {
    double x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a = -2*x1 + 2*x2;
    b = -2*y1 + 2*y2;
    c = x2*x2 + y2*y2 - x1*x1 - y1*y1;
    d = -2*x1 + 2*x3;
    e = -2*y1 + 2*y3;
    f = x3*x3 + y3*y3 - x1*x1 - y1*y1;

    solve();
    
    double r = (x - x1)*(x - x1) + (y - y1)*(y - y1);
    r = sqrt(r);
    printf("%.3f\n", RoundNumber(r));
  }  
  return 0;
}