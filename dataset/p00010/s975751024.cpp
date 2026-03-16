#include <iostream>
#include <cmath>

using namespace std;

void calculate(double, double, double, double, double, double, double&, double&);

int main(){
  int i, num;
  double x1, y1, x2, y2, x3, y3;
  double a, b, c, d, e, f;
  double l, m, n;
  double xp, yp, r;

  cin >> num;

  for(i=0; i<num; i++){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    a = x1 - x2;
    b = y1 - y2;
    c = x2*x2 + y2*y2 - (x1*x1 + y1*y1);
    d = x2 - x3;
    e = y2 - y3;
    f = x3*x3 + y3*y3 - (x2*x2 + y2*y2);

    calculate(a, b, c, d, e, f, l, m);
    n = -(x1*x1 + y1*y1 + l*x1 + m*y1);

    xp = -l / 2;
    yp = -m / 2;
    r = 0.5 * sqrt(l*l + m*m - 4*n);

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(3);
    cout << xp << " " << yp << " " << r << endl;
  }

  return 0;
}

void calculate(double a, double b, double c, double d, double e, double f, double& l, double& m){
    l = (c*e - f*b)/(a*e - d*b);

    if(b != 0)
      m = (c - a*l)/b;
    else
      m = (f - d*l)/e;
}