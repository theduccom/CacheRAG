#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
int main(void){
  int W,N,v[1001],w[1001];
  int cas = 1;
  while(cin>>W){
    if(W==0) break;
    int dp[1001]={0};
    printf("Case %d:\n",cas++);
    cin>>N;
    REP(i,N){
      scanf("%d,%d",&v[i],&w[i]);
    }
   for(int i=0; i<N; i++){
     for(int j=W;j-w[i]>=0;j--){
      dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
     }
   }
  printf("%d\n",dp[W]);
  for(int i=0; i<=W; i++){
    if(dp[i]==dp[W]){
      printf("%d\n",i);
      break;
    }
  }

  }
  return 0;
}