#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;


int main(){

  int n;
  cin >> n;
  double x[3];

  double y[3];

  for(int i=0; i<n; i++){
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

    double a, b, c;
    double r, px, py;

    a = sqrt( (x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]) );
    b = sqrt( (x[1]-x[2])*(x[1]-x[2]) + (y[1]-y[2])*(y[1]-y[2]) );
    c = sqrt( (x[2]-x[0])*(x[2]-x[0]) + (y[2]-y[0])*(y[2]-y[0]) );

    r = (a*b*c) / (sqrt((a+b+c)*(b+c-a)*(a-b+c)*(a+b-c)));
    px = (((x[0]*x[0])+(y[0]*y[0]))*(y[1]-y[2])+((x[1]*x[1])+(y[1]*y[1]))*(y[2]-y[0])
    +((x[2]*x[2])+(y[2]*y[2]))*(y[0]-y[1]))/(x[0]*(y[1]-y[2])+x[1]*(y[2]-y[0])+x[2]*(y[0]-y[1]))/2;

    py = (((x[0]*x[0])+(y[0]*y[0]))*(x[1]-x[2])+((x[1]*x[1])+(y[1]*y[1]))*(x[2]-x[0])
    +((x[2]*x[2])+(y[2]*y[2]))*(x[0]-x[1]))/(y[0]*(x[1]-x[2])+y[1]*(x[2]-x[0])+y[2]*(x[0]-x[1]))/2;


    printf("%.3lf %.3lf %.3lf\n", px, py, r);
  }




  return 0;
}














// EOF