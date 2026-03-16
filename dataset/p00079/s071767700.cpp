#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 10;

double cross_product(complex<double> a, complex<double> b) {
  return (conj(a) * b).imag();
}

int main() {
  double x, y;
  vector<complex<double>> P;
  while (~scanf("%lf,%lf", &x, &y)) {
    P.push_back(complex<double>(x, y));
  }
  double sum = 0.0;
  for (int i = 0; i + 2 < P.size(); i++) {
    complex<double> a = P[0], b = P[i + 1], c = P[i + 2];
    sum += cross_product(b - a, c - a) / 2;
  }
  printf("%.6f\n", abs(sum));
}

