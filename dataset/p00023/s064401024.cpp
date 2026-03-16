#include <iostream>
#include <algorithm>
#include <cmath>
#include <complex>
#include <vector>
using namespace std;
typedef complex<double> P;

int main() {
  int Tc;
  cin >> Tc;
  while(Tc--) {
    P p1, p2;
    double r1, r2;
    cin >> p1.real() >> p1.imag() >> r1;
    cin >> p2.real() >> p2.imag() >> r2;
    double d = abs(p1-p2);
    int res;
    if(d < r1-r2) res = 2;
    else if(d < r2-r1) res = -2;
    else if(d > r1+r2) res = 0;
    else res = 1;
    cout << res << endl;
  }
  return 0;
}