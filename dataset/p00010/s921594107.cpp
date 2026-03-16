#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

/*
 * ax+by=c, dx+ey=f ツづーツ嘉ーツつュツ。
 * ツ姪淞づィツ値ツつェ0ツづ按づァツ青ャツ古キツ、1ツづ個湘ェツ債づ溝e-bdツつェEPSツ暗按可コツづ可づ按づづつ「ツづ古ォツ債キツ妥・ツつォツつ「ツ。
 */
int solve_linear_equations( double a, double b, double c, 
  double d, double e, double f, double& x, double& y )
{
  double EPS = 1e-9;
  double delta = a*e-b*d;
  x = 0.0;
  y = 0.0;
  if( (delta < 0 && -delta < EPS) || (delta >=0 && delta < EPS) ) return 1;
  x = ((c*e-b*f) / delta) + 0.0;
  y = ((a*f-c*d) / delta) + 0.0;
  return 0;
}

int main( void )
{
  int n;
  double x1,y1,x2,y2,x3,y3;
  cin >> n;
  for( int i=0; i<n; i++ ){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a,b,c,d,e,f,x,y,r;
    a = 2*(x1-x2);
    b = 2*(y1-y2);
    c = x1*x1+y1*y1-x2*x2-y2*y2;
    d = 2*(x1-x3);
    e = 2*(y1-y3);
    f = x1*x1+y1*y1-x3*x3-y3*y3;
    solve_linear_equations( a,b,c,d,e,f,x,y );
    r = sqrt(x1*x1-2*x1*x+x*x+y1*y1-2*y1*y+y*y);
    printf( "%.3lf %.3lf %.3lf\n",x,y,r );
  }
  return 0;
}