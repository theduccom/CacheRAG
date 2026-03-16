#include <complex>
#include <cmath>
#include <stdio.h>
#include <iostream>
using namespace std;

class xy_t{
public:
  double x;
  double y;
};

xy_t P[110];
int main(){
  int N = 0;
  double mx, my;
  while(scanf("%lf,%lf", &mx, &my) != EOF){
    P[N].x = mx;
    P[N].y = my;
    N++;
  }
  double sum = 0.0;
  for(int i=0; i+2<N; i++){
    xy_t a=P[0], b=P[i+1], c=P[i+2];
    sum += 0.5*abs((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x));
    
   
  }
  printf("%.6f\n", abs(sum));
}