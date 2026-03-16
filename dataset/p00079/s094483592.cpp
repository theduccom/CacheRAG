#include <bits/stdc++.h>
using namespace std;
double len(double, double, double, double);

int main() {
  double x, y, lx, ly, s = 0.0, sx, sy;
  char c;
  cin >> lx >> c >> ly;
  sx = lx;
  sy = ly;
  while(cin >> x >> c >> y) {
    double a = len(sy, sx, ly, lx);
    double b = len(sy, sx, y, x);
    double c = len(ly, lx, y, x);
    double z = (a + b + c) / 2.0;
    double bu = z * (z - a) * (z - b) * (z - c);
    s += pow(bu, 1.0 / 2.0);
    lx = x;
    ly = y;
  }
  cout << s << endl;
  return 0;
}

double len(double sy, double sx, double ey, double ex) {
  double y = ey - sy;
  double x = ex - sx;
  return pow(pow(y, 2) + pow(x, 2), 1.0 / 2.0);
}