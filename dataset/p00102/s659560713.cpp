#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;


signed main(){
  int n;
  int M[12][12];
  while(cin>>n,n){
    rep(i,n)rep(j,n)cin>>M[i][j];
    rep(i,n){
      int tmp=0;
      rep(j,n)tmp+=M[i][j];
      M[i][n]=tmp;
    }
    rep(i,n){
      int tmp=0;
      rep(j,n)tmp+=M[j][i];
      M[n][i]=tmp;
    }
    int tmp=0;
    rep(i,n)tmp+=M[n][i];
    M[n][n]=tmp;
    rep(i,n+1){
      rep(j,n+1)cout<<setw(5)<<M[i][j];
      cout<<endl;
    }
  }
  return 0;
}