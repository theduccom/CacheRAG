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

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

#define MAX 1000001
int main(){
  vector<bool> prime(1000001, true);
  prime[0] = prime[1] = false;
  for(int i=2; i<MAX; i++)
    if(prime[i])
      for(int j=i+i; j<MAX; j+=i)
	prime[j] = false;

  int n, x;
  while(scanf("%d%d",&n,&x),n+x){
    int cost[n];
    int ans = 0;
    REP(i,n) scanf("%d",cost+i);
    vector<bool> f(x+1, false);
    f[0] = true;
    REP(i,x+1){
      if(f[i]){
	if(prime[i]) ans = i;
	REP(j,n){
	  if(i+cost[j] <= x)
	    f[i+cost[j]] = true;
	}
      }
    }
    if(ans == 0) printf("NA\n");
    else printf("%d\n",ans);
  }
  return 0;
}