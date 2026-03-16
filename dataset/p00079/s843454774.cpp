#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
  return sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
}


int main() {
  int k=0;
  double x[20],y[20],xa,ya,S=0,a,b,c,z;
  while(scanf("%lf,%lf\n",&xa,&ya) == 2) {
    x[k] = xa;
    y[k] = ya;
    k++;
  }
  for(int i=0;i<k-2;i++) {
    a = distance(x[0],y[0],x[i+1],y[i+1]);
    b = distance(x[0],y[0],x[i+2],y[i+2]);
    c = distance(x[i+1],y[i+1],x[i+2],y[i+2]);
    z = (a + b + c) / 2;
    S += sqrt(z * (z - a) * (z - b) * (z - c));
  }
  printf("%.6lf\n",S);
}