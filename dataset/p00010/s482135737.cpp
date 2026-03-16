#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int n;
  double x1,y1,x2,y2,x3,y3,p,p1,p2,q,q1,q2,r;
  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    p1 = (x2 * x2 - x1 * x1 + y2 * y2 - y1 * y1) * (y3 - y1) - (x3 * x3 - x1 * x1 + y3 * y3 - y1 * y1) * (y2 - y1);
    p2 = 2 * (x1 * y2 - x1 * y3 + x2 * y3 - x2 * y1 + x3 * y1 - x3 * y2);
    p = p1 / p2;
    q1 = (y2 * y2 - y1 * y1 + x2 * x2 - x1 * x1) * (x3 - x1) - (y3 * y3 - y1 * y1 + x3 * x3 - x1 * x1) * (x2 - x1);
    q2 =  2 * (y1 * x2 - y1 * x3 + y2 * x3 - y2 * x1 + y3 * x1 - y3 * x2);
    q = q1 / q2;
    r = sqrt((x1-p) * (x1-p) + (y1-q) * (y1-q) );
    p *= 1000;
    p += 0.5;
    p = floor(p);
    p /= 1000;
    q *= 1000;
    q += 0.5;
    q = floor(q);
    q /= 1000;
    r *= 1000;
    r += 0.5;
    r = floor(r);
    r /= 1000;
    printf("%.3f %.3f %.3f\n", p, q, r);
  }
}