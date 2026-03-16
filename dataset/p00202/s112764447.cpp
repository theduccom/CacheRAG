#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define MAX 100005
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

bool Is_Prime(int n){
  if(n==1) return false;
  for(int i=2;i*i<n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

signed main(){
    int n,x;
    while(cin>>n>>x,n){
      vector<int> v(n);
      rep(i,n)cin>>v[i];
      vector<int> dp(x+1);
      dp[0]=1;
      rep(j,n){
        loop(i,1,x+1){
          if(i-v[j]>=0&&dp[i-v[j]]==1){
            dp[i]=1;
          }
        }
      }
      for(int i=x;i>0;i--){
        if(dp[i]==1&&Is_Prime(i)){
          cout<<i<<endl;
          goto at;
        }
      }
      cout<<"NA"<<endl;
      at: ;
    }

  return 0;
}