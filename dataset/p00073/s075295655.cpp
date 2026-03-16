#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<climits>
#include<cfloat>
#include<cmath>
#include<map>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define DBL(x) ((x)*(x))

typedef unsigned int uint;
typedef long long ll;

using namespace std;

int main(){
  double x, h;
  while(cin>>x>>h, x+h){
    double hh;
    hh = sqrt(DBL(x/2.0)+DBL(h));
    printf("%.6f\n", x*x + 2*hh*x);
  }
  return 0;
}