#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back((a))
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<((x))<<endl
#define fi first
#define se second

#define INF 2147483600
#define long long long

const int MAX_PRIME = 1000000;
bool isPrime[MAX_PRIME+1];
// sieve of Erastosthenes
inline void prime_list(){
  const int sz = MAX_PRIME;
  fill(isPrime, isPrime+sz+1, true);
  isPrime[0]=isPrime[1]=false;
  for(int i=4;i<=sz;i+=2) isPrime[i]=false;
  for(int i=3; i*i<=sz; i+=2){
    if(isPrime[i]){
      for(long j=(long)i*i; j<=sz; j+=i) isPrime[j]=false;
    }
  }
}

int main(){
  prime_list();
  int n,x;
  while(cin>>n>>x, n|x){
    vector<int> dish(n);
    rep(i,n) scanf("%d", &dish[i]);
    vector<bool> dp(x+1, false);
    dp[0]=true;
    rep(i,n){
      rep(j,x) if(dp[j]){
        if(j+dish[i]<=x) dp[j+dish[i]]=true;
      }
    }
    int res = -1;
    repl(i,2,x+1) if(isPrime[i] && dp[i]) res = i;
    if(res == -1 ) cout<<"NA" << endl;
    else cout << res << endl;
  }

  return 0;
}