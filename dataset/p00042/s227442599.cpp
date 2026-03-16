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

int main(){
  int tc=1;
  int W;
  while(cin>>W, W){
    int n;
    cin>>n;
    vector<int> v(n), w(n);
    rep(i,n) scanf("%d,%d", &v[i], &w[i]);

    vector<int> dp(W+1, -INF);
    dp[0]=0;
    rep(i,n){
      for(int j=W; j-w[i]>=0; j--) if(j-w[i]>=0){
        dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
      }
    }
    int mw=0, mv=0;
    rep(i,W+1) if(dp[i]>mv){mv=dp[i], mw=i;}
    printf("Case %d:\n", tc); tc++;
    printf("%d\n%d\n", mv, mw);
  }

  return 0;
}