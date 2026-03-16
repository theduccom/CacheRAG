
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j;
  int w,n;
  int t=0;
  while(1){
    t++;
    cin>>w;
    if(w==0)break;
    cout<<"Case "<<t<<":"<<endl; 
    cin>>n;
    vector<vi> dp(n+1,vi(w+1,-1));
    dp[0][0]=0;
    rep(i,n){
      int tv,tw;
      char c;
      cin>>tv>>c>>tw;
      rep(j,w+1)if(dp[i][j]>=0){
	dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
	if(j+tw<=w)
	  dp[i+1][j+tw]=max(dp[i+1][j+tw],dp[i][j]+tv);
      } 
    }
    int ans=0;
    rep(i,w+1)if(dp[n][i]>dp[n][ans])ans=i;

    cout<<dp[n][ans]<<endl;
    cout<<ans<<endl;
   
  }
}