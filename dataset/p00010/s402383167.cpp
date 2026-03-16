#include<bits/stdc++.h>
using namespace std;
typedef complex<double> point;
typedef pair<point, point> line;
double cross(point a, point b){
  return imag(conj(a) * b);
}


point cross_point(line a, line b){
  double d1 = cross(b.second - b.first,
                    b.first - a.first);
  double d2 = cross(b.second - b.first,
                    a.second - a.first);
  return a.first + (a.second - a.first) * (d1/d2);
}

int main(int argc, char *argv[]){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    point x[3];
    for (int j = 0; j < 3; j++) {
      double real, imag;
      cin >> real >> imag;
      x[j] = point(real, imag);
    }
    point m1 = (x[0] - x[1]), m2 = (x[1] - x[2]);
    m1 = point(m1.real()/2, m1.imag()/2);
    m2 = point(m2.real()/2, m2.imag()/2);
    line n1 = line(m1*point(0, 1), m1*point(0, -1)),
      n2 = line(m2*point(0, 1), m2*point(0, -1));
    n1.first += m1 + x[1];
    n1.second += m1 + x[1];
    n2.first += m2 + x[2];
    n2.second += m2 + x[2];
    point center = cross_point(n1, n2);
    printf("%.3lf %.3lf %.3lf\n", center.real(), center.imag(),
           abs(center - x[0]));
  }
  return 0;
}