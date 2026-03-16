#include <iostream>
#include <cmath>
using namespace std;
int main( void )
{
  double PI = 3.14159265358979323846264338327950288;
  double x=0,y=0,d,a,b=PI/2;
  char c;
  while( 1 ){
    cin >> d >> c >> a;
    if( d == 0 && a == 0 ) break;
    x += d * cos(b);
    y += d * sin(b);
    b -= a / 360 * 2 * PI;
  }
  cout << (int)x << endl;
  cout << (int)y << endl;
  return 0;
}