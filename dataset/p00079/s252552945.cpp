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

using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int main(){
  vector<P> v;
  double a,b,c;
  while(~scanf("%lf,%lf",&a,&b)) v.push_back(P(a,b));
  double ans = 0.0;
  for(int i=1; i<v.size()-1; i++){
    double z;
    a = abs(v[0] - v[i]);
    b = abs(v[0] - v[i+1]);
    c = abs(v[i+1] - v[i]);
    z = (a + b + c) / 2.0;
    ans += sqrt(z*(z-a)*(z-b)*(z-c));
  }
  printf("%.6f\n",ans);
  return 0;
}