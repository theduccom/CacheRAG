#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;

#define PI (3.1415926535)
#define EPS (1e-10)
bool eq(double a, double b){
  return abs(a-b) < EPS;
}

int main(){
  complex<double> p[3];
  int n; cin>>n;
  while(n --> 0){
    REP(i,3) cin>>p[i].real()>>p[i].imag();
    double ag = arg(p[0]-p[2])-arg(p[1]-p[2]);
    double r = abs(abs(p[0] - p[1]) / sin(ag) / 2.0);
    double s = r * r * sin(2*ag) / 2.0;
    complex<double> c = (p[0] + p[1]) / 2.0;
    complex<double> v = (p[0] - p[1]) * complex<double>(0,1);
    double rr = s * 2.0 / abs(p[0] - p[1]); 
    complex<double> o1 = c + rr * v / abs(v),
                    o2 = c - rr * v / abs(v), o;
    if(eq(abs(o1-p[0]),r) && eq(abs(o1-p[1]),r) && eq(abs(o1-p[2]),r)) o = o1;
    else o = o2;
    printf("%.3f %.3f %.3f\n",o.real(),o.imag(),r);
  }
  return 0;
}