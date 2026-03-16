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

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int memo[1010];
int w,n;
int wei[1000];
int val[1000];

void search(int p){
  if(p == n) return;
  int ww = wei[p];
  int vv = val[p];
  for(int i=w-ww; i>=0; i--) if(memo[i] != -1) {
      memo[ww+i] = max(memo[ww+i], memo[i] + vv); 
  }
  search(p+1);
}

int main(){
  int cc = 1;
  while(scanf("%d",&w),w){
    scanf("%d",&n);
    REP(i,n) scanf("%d,%d",val+i,wei+i);
    memset(memo,-1,sizeof(memo));
    memo[0] = 0;
    search(0);
    int vv = 0, ww = 0;
    REP(i,w+1){
      if(memo[i] > vv){
	vv = memo[i];
	ww = i;
      }
    }
    printf("Case %d:\n",cc++);
    printf("%d\n",vv);
    printf("%d\n",ww);
  }
  return 0;
}