#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <complex>
#include <math.h>

using namespace std;
typedef complex<double> Point;

double cross(Point a, Point b) {
  return imag(conj(a) * b); 
}

int main() {
  int test;
  scanf("%d", &test);
  while (test--) {
    double x, y;
    scanf("%lf %lf", &x, &y);
    Point c1 = Point(x, y); 
    scanf("%lf %lf", &x, &y);
    Point c2 = Point(x, y); 
    scanf("%lf %lf", &x, &y);
    Point c3 = Point(x, y); 
    double S = abs(cross(c2 - c1, c3 - c1) / 2.0);
    double a = norm(c3 - c2);
    double b = norm(c1 - c3);
    double c = norm(c2 - c1);
    Point p = (a * (b + c - a) * c1 + b * (c + a - b) * c2 + c * (a + b - c) * c3) / (16.0 * S * S); 
    printf("%.3lf %.3lf %.3lf\n", p.real(), p.imag(), abs(p - c1));
  }
}