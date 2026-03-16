#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

  long long int x, h;

  while( true ) {

    cin >> x >> h;

    if ( x == 0 ) break;

    cout << fixed << setprecision(7) << sqrt( 0.25 * x * x + h * h ) * x * 2 + x * x << endl;

  }

  return 0;

}