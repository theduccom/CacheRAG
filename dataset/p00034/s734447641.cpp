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
#include<map>

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
  int l[10];
  while(~scanf("%d,",&l[0])){
    int v1, v2;
    int sum = l[0];
    REP(i,9){
      scanf("%d,",&l[i+1]);
      sum += l[i+1];
      l[i+1] += l[i];
    }
    scanf("%d,%d",&v1,&v2);
    double t = (double) sum / (v1 + v2);
    double pos = t * v1;
    REP(i,10){
      if(((double)l[i]) >= pos){
	printf("%d\n",i+1);
	break;
      }
    }
  }
  return 0;
}