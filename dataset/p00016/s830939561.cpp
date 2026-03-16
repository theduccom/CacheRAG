#include <cstdio>
#include <bitset>
#include <cmath>
#include <complex>
#include <vector>
#include <algorithm>
#include <stack>
#include <iostream>
#define EPS 1e-6

using namespace std;
typedef complex<double> coor;

double cross(coor a, coor b)
{
  return a.real() * b.imag() - a.imag() * b.real();
}

double dot(coor a, coor b)
{
  return a.real() * b.real() + a.imag() * b.imag();
}

int main()
{
  double x, y;
  coor cur(0, 0);
  coor dir(1, 0);
  double pi = atan(1) * 4;
  while (scanf(" %lf,%lf ", &x, &y) == 2) {
    //printf("%.3lf\n%.3lf\n", cur.real(), cur.imag());
    if (abs(x) < EPS && abs(y) < EPS) {break;}
    cur += coor(x * dir.real(), x * dir.imag());
    double Arg = arg(dir) + (y / 180) * pi;
    dir = coor(cos(Arg), sin(Arg));
  }
  printf("%d\n%d\n", (int)cur.imag(), (int)cur.real());
  return 0;
}