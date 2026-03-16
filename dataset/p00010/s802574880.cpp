#include <cstdio>
#include <bitset>
#include <cmath>
#include <complex>

#define EPS 1e-6
using namespace std;

double cross(complex<double> a, complex<double> b)
{
  return a.real() * b.imag() - a.imag() * b.real();
}

double dot(complex<double> a, complex<double> b)
{
  return a.real() * b.real() + a.imag() * b.imag();
}

int main()
{
  complex<double> coor[3];
  int N;
  scanf(" %d ", &N);
  for (int i = 0; i < N; i++) {
    for (int i = 0; i < 3; i++) {
      double x, y;
      scanf(" %lf %lf ", &x, &y);
      coor[i] = complex<double>(x, y);
      //printf("coor[%d](%.3lf, %.3lf)\n", i ,coor[i].real(), coor[i].imag());
    }
    complex<double> h[2], d[2];
    for (int j = 0; j < 2; j++) {
      h[j] = complex<double>((coor[j].real() + coor[j + 1].real()) / 2, (coor[j].imag() + coor[j + 1].imag()) / 2);
      d[j] = complex<double>(coor[j].real() - coor[j + 1].real(), coor[j].imag() - coor[j + 1].imag());
    }
    double D = cross(d[0], d[1]);
    complex<double>o(cross( complex<double>( dot( d[0], h[0] ) , dot( d[1], h[1] ) ), complex<double>( d[0].imag(), d[1].imag() ) ) / D,
					cross( complex<double>( d[0].real(), d[1].real() ), complex<double>( dot( d[0], h[0] ) , dot( d[1], h[1] ) ) ) / D);
    //printf("h1(x, y) = (%.3lf, %.3lf), h2(x, y) = (%.3lf, %.3lf), d1(x, y) = (%.3lf, %.3lf), d2(x, y) = (%.3lf, %.3lf), o(x, y) = ( %.3lf, %.3lf)\n", h[0].real(), h[0].imag(), h[1].real(), h[1].imag(), d[0].real(), d[0].imag(), d[1].real(), d[1].imag(), o.real(), o.imag());
    complex<double> t = o - coor[0];
    double r = abs(t);
    printf("%.3lf %.3lf %.3lf\n", o.real(), o.imag(), r);    
  }
  return 0;
}