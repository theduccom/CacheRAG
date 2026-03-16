#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

#define MAX 1000010
#define INF (1<<29)

int N,X;
int a[30],dp[MAX];
bool isprime[MAX];

void sieve(){
  int i,j;

  rep(i,MAX) isprime[i] = true;
  isprime[0] = isprime[1] = false;
  for(i = 2; i*i <= MAX; i++) if(isprime[i]){
    for(j = 2*i; j <= MAX; j += i) isprime[j] = false;
  }
}

int main(){
  int i,j,k;

  sieve();

  for(;;){
    scanf("%d %d",&N,&X); if(N == 0 && X == 0) break;
    rep(i,N) scanf("%d",&a[i]);

    rep(i,MAX) dp[i] = INF;
    dp[0] = 0;

    int res = 0;
    rep(i,N){
      for(j = 0; j <= X; j++) if(j - a[i] >= 0 && dp[j] > dp[j - a[i]] + 1){
        dp[j] = dp[j - a[i]] + 1;
        if(isprime[j]) res = max(res, j);
      }
    }

    if(res == 0) cout << "NA" << endl; else cout << res << endl;
  }

  return 0;
}