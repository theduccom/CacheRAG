#include<cstdio>
#include<cmath>
double Heron(double a, double b, double c){
  double z = (a + b + c) / 2;
  return sqrt(z * (z - a) * (z - b) * (z - c));
}
double Pythagoras(double a, double b, double c, double d, double e, double f){
  double x, y, z;
  x = sqrt((c - a) * (c - a) + (d - b) * (d - b));
  y = sqrt((e - c) * (e - c) + (f - d) * (f - d));
  z = sqrt((a - e) * (a - e) + (b - f) * (b - f));
  return Heron(x, y, z);
}
int main(void){
  double x[25], y[25], ans = 0;
  int i = 3;
  scanf("%lf,%lf %lf,%lf %lf,%lf",&x[0] , &y[0], &x[1], &y[1], &x[2], &y[2]);
  ans = Pythagoras(x[0], y[0], x[1], y[1], x[2], y[2]);
  while(scanf("%lf,%lf",&x[i], &y[i]) != EOF){
    ans += Pythagoras(x[0], y[0], x[i-1], y[i-1], x[i], y[i]);
    i++;
  }
  printf("%.6f\n",ans);
}
