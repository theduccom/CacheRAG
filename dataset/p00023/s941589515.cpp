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
typedef complex<double> P;

int main(){
  int n; scanf("%d",&n);
  while(n --> 0){
    P c1, c2; double r1, r2;
    scanf("%lf%lf%lf%lf%lf%lf",&c1.real(),&c1.imag(),&r1,&c2.real(),&c2.imag(),&r2);
    double dist = abs(c1 - c2);
    if(r1 > dist + r2) puts("2");
    else if(r2 > dist + r1) puts("-2");
    else if(r1 + r2 + EPS >= dist) puts("1");
    else puts("0");
  }
  return 0;
}