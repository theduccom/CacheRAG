#include <iostream>
#include <cmath>
#include <iomanip>
#define sqr(x) ((x) * (x))
using namespace std;

void equation(double a, double b, double c, double d, double e, double f, double *x, double *y)
{
  *x = (c * e - b * f) / (a * e - b * d);
  *y = (a * f - c * d) / (a * e - b * d);   
}


int main()
{
  int n;
  double x1, y1, x2, y2, x3, y3, x, y;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x = y = 0;
    equation((2 * (x2 - x1)), (2 * (y2 - y1)), (sqr(x2) + sqr(y2) - sqr(x1) - sqr(y1)), (2 * (x3 - x2)), (2 * (y3 - y2)), (sqr(x3) + sqr(y3) - sqr(x2) - sqr(y2)), &x, &y);
    cout << fixed << setprecision(3) << x << ' ' << y << ' ' << sqrt(sqr(x1 - x) + sqr(y1 - y)) << endl;
  }
}