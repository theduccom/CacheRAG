#include<iostream>
#include<iomanip>
#include<memory>
#include<array>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>

using namespace std;

double rad( double x )
{
  return x * 3.14159265358979 / 180;
}

int main()
{
  double r, t, g, x, y;
  char c;
  x = y = 0;
  g = 90;

  while( cin >> r >> c >> t )
    {
      x += r * cos( rad( g ) );
      y += r * sin( rad( g ) );
      g -= t;
    }

  cout << trunc(x) << endl;
  cout << trunc(y) << endl;
  
  return 0;
}