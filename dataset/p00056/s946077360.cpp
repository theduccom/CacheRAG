#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
inline int in(){ int x; scanf("%d",&x); return x;}

bool isprime[50000];

void sieve(int n){
  memset(isprime,1,sizeof(isprime));
  isprime[0] = isprime[1] = false;
  for(int i = 2; i*i <= n; i++) if(isprime[i]){
    for(int j = 2*i; j <= n; j += i) isprime[j] = false;
  }
}

int main(){
  int i,j,k;
  int n;
  int res;

  sieve(50000);
  while(scanf("%d",&n)){
    if(n == 0) break;

    res = 0;
    for(i = 2; 2*i <= n; i++) if(isprime[i] && isprime[n-i]) res++;
    printf("%d\n",res);
  }

  return 0;
}