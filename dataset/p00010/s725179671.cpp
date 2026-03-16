#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const double EPS = 1e-3;

double dist(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main() {
  int n, p, q;
  double x[3], y[3], ta, tb, tc, sta, cta, r;
  double z[2], a, b, c, d, e, f;
  bool zf;
  cin >> n;
  for (int k=0;k<n;k++) {
    for (int i=0;i<3;i++) {
      cin >> x[i] >> y[i];
    }
    ta = dist(x[1], y[1], x[2], y[2]);
    tb = dist(x[0], y[0], x[1], y[1]);
    tc = dist(x[0], y[0], x[2], y[2]);
    cta = (ta*ta - tb*tb - tc*tc) / (2*tb*tc);
    sta = sqrt(1 - cta*cta);
    r = ta / sta / 2;

    double m[2][3] = { { 2*(x[0]-x[1]), 2*(y[0]-y[1]), x[0]*x[0]+y[0]*y[0]-x[1]*x[1]-y[1]*y[1] }, 
                       { 2*(x[0]-x[2]), 2*(y[0]-y[2]), x[0]*x[0]+y[0]*y[0]-x[2]*x[2]-y[2]*y[2] } };
    zf = false;
    for (int i=0;i<2;i++) {
      for (int j=0;j<2;j++) {
        if (m[i][j] == 0) {
          p = i; q = j;
          zf = true;
        }
      }
    }
    if (zf) {
      z[1-q] = m[p][2] / m[p][1-q];
      z[q] = (m[1-p][2] - m[1-p][1-q] * z[1-q]) / m[1-p][q];
    } else {
      a = m[0][0]; b = m[0][1]; c = m[0][2];
      d = m[1][0]; e = m[1][1]; f = m[1][2];
      z[1] = (f - d*c/a) / (e - d*b/a);
      z[0] = (c - b*z[1]) / a;
    }
    printf("%.3f %.3f %.3f\n", z[0], z[1], r);
  }
  return 0;
}