//Circumscribed Circle of a Triangle
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    double x1, y1, x2, y2, x3, y3;
    double px, py, r;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    px=((y1-y2)*(y2-y3)*(y3-y1)+(y1-y2)*(x2+x3)*(x2-x3)+(y3-y2)*(x1+x2)*(x1-x2))/(2*((y1-y2)*(x2-x3)+(y3-y2)*(x1-x2)));
    py=((x1-x2)*(x2-x3)*(x3-x1)+(x1-x2)*(y2+y3)*(y2-y3)+(x3-x2)*(y1+y2)*(y1-y2))/(2*((x1-x2)*(y2-y3)+(x3-x2)*(y1-y2)));
    r=sqrt(pow(x1-px, 2.0)+pow(y1-py, 2.0));
    printf("%.3f %.3f %.3f\n", px, py, r);
  }
  return 0;
}