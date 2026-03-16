#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define MAX 100005
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;



signed main(){
  int W,N;
  int c=1;
  while(cin>>W,W){
    cin>>N;
    vector<int> v(N),w(N);
    char x;
    vector<vector<int> > dp(N+1,vector<int>(W+1));
    rep(i,N)cin>>v[i]>>x>>w[i];
    loop(i,1,N+1){
      rep(j,W+1){
        if(j-w[i-1]>=0){
          dp[i][j]=max(dp[i-1][j-w[i-1]]+v[i-1],dp[i-1][j]);
        }else{
          dp[i][j]=dp[i-1][j];
        }
      }
    }
    int val=dp[N][W],wei;
    rep(i,W+1){
      if(dp[N][i]==val){
        wei=i;
        break;
      }
    }
    cout<<"Case "<<c<<':'<<endl;
    cout<<val<<endl;
    cout<<wei<<endl;
    c++;
  }

  return 0;
}