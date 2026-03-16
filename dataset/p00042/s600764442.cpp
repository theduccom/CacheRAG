#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<cstdio>
#include<cstring>
typedef unsigned long long ull;
#define rep(i,a) for(int i=0;i<a;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);
const double inf = (int)1e8;

int main(void){
  int W,N,cnt = 0;
  while(cin>>W,W){
    cin>>N;
    vector<int> w(N);
    vector<int> v(N);
    long long dp[1001][1001];
    memset(dp,0,sizeof(dp));
    
    rep(i,N)scanf("%d,%d",&v[i],&w[i]);

    for(int i = N-1 ; i >= 0 ; i --){
      rep(j,W+1){
	if(j < w[i]) dp[i][j] = dp[i+1][j];
	else dp[i][j] = max(dp[i+1][j] , dp[i+1][j - w[i]]+v[i]);
      }                     
    }

    cout<<"Case "<<++cnt<<":"<<endl;
    cout<<dp[0][W]<<endl;
    for(int i = W ; ; i--){
      if(dp[0][i] != dp[0][W]){
	cout<<i+1<<endl;
	break;
      }
    }
  }

  return 0;
}