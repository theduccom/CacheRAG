#include<bits/stdc++.h>
using namespace std;

double line(double a, double b, double c, double d){

  return sqrt(abs(a-c) * abs(a-c) + abs(b-d) * abs(b-d));

}

int main(){

  double x, y, xx, yy, xxx, yyy, s = 0, z, a, b, c;
  scanf("%lf,%lf", &x, &y);
  scanf("%lf,%lf", &xx, &yy);

  while(~scanf("%lf,%lf", &xxx, &yyy)){
    a = line(x, y, xx, yy);
    b = line(xx, yy, xxx, yyy);
    c = line(x, y, xxx, yyy);

    z = (a + b +c) / 2.0;

    s += sqrt(z * (z-a) * (z-b) * (z-c));

    xx = xxx, yy = yyy;
  }

  printf("%.12lf\n", s);
}