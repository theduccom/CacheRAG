#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

typedef complex<double> C;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

C c[21];

void solve() {
  char cc;
  int z = -1;
  while (z++,cin>>c[z].real()>>cc>>c[z].imag());
  z++;
  
  double S = 0;
  REP(i,1,z-1) {
    double a = abs(c[0]-c[i]);
    double b = abs(c[i]-c[i-1]);
    double cc = abs(c[0]-c[i-1]);
    double z = (a+b+cc)/2;
    S += sqrt(z*(z-a)*(z-b)*(z-cc));
  }
  cout<<S<<endl;
}

int main (int argc, char const* argv[]) {
  solve();
  return 0;
}