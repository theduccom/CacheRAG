#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

  vector< double > x, y;
  double in_x, in_y;
  char in_c;

  while( cin >> in_x >> in_c >> in_y ) {

    x.push_back( in_x );
    y.push_back( in_y );

  }

  double ans = 0.00;

  for( long long int i = 0; i < x.size() - 2; i++ ) {

    double mx = x[0] - x[i+1];
    double my = y[0] - y[i+1];
    double a = sqrt( mx*mx + my*my );
    mx = x[0] - x[i+2];
    my = y[0] - y[i+2];
    double b = sqrt( mx*mx + my*my );
    mx = x[i+1] - x[i+2];
    my = y[i+1] - y[i+2];
    double c = sqrt( mx*mx + my*my );
    double z = ( a + b + c ) / 2;

    ans += sqrt(z*(z-a)*(z-b)*(z-c));

  }

  cout << fixed << setprecision(8) << ans << endl;
  return 0;

}