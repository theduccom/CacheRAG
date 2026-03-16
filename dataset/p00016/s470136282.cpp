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
#include<cfloat>
#include<cassert>

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
typedef complex<double> P;

#define PI (3.1415926535)
#define EPS (1e-10)

int main(){
  double a,b;
  P pos(0.0,0.0);
  P ang(0.0,1.0);
  while(scanf("%lf,%lf",&a,&b), a+b){
    double th = - (b / 180.0) * PI;
    pos = pos + ang * a;
    ang = ang * P(cos(th), sin(th));
  }
  cout << (int)pos.real() << endl << (int)pos.imag() << endl;
  return 0;
}