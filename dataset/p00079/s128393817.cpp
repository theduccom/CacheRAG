#include<complex>
#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

typedef complex<double> Point;

#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)

typedef vector<Point> Polygon;

double cross(const Point &a, const Point &b) {
  return imag(conj(a)*b);
}

double area(const Polygon &p) {
  double A = 0;
  for(int i=0; i<p.size(); i++) {
    A += cross( p[i], p[(i+1)%p.size()] );
  }
  return A;
}

int main() {
  int n,count = 1;
  double x,y;

  Polygon p = Polygon();
  while(~scanf("%lf,%lf", &x,&y)) {
    p.push_back( Point(x,y) );
  }

  double a = area(p)/2;
  printf("%f\n", (a < 0) ? -a : a);
  count++;
}