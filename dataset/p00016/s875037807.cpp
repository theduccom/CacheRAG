#include <cstdio>
#include <iostream>
#include <complex>
using namespace std;
const double PI = 3.141592653589793238462643383279502884L;

int main(int argc, char **argv)
{
  int degree = 90;
  int d, t;
  char c;
  complex<double> v(0, 0);

  while (cin >> d >> c >> t) {
    if (!d && !t)
      break;

    auto next = polar((double)d, degree*PI/180.0);
    v += next;
    degree = (degree - t) % 360;
  }
  printf("%d\n%d\n", (int)v.real(), (int)v.imag());
  return 0;
}