#include<stdio.h> 

int main() { 
 double x[22], y[22], ans = 0; 
 int n = 0; 
 int l;
 while (scanf("%lf,%lf", &x[n], &y[n]) != -1) { 
  n++; 
 } 
 double s; 
 for (int i = 1; i < n; i++) { 
  s = (x[i] - x[0])*(y[(i + 1) % n] - y[0]) - (x[(i + 1) % n] - x[0])*(y[i] - y[0]); 
  if (s < 0)s = -s;
  ans += s;
 } 
 printf("%.8lf", ans/2.0); 
}
