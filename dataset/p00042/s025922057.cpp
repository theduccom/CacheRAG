#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int n,W;
  int cnt=1;
  while(cin>>W,W){
    cin>>n;
    vector<int>v(n);
    vector<int>w(n);
    for(int i=0;i<n;i++)
      scanf("%d,%d",&v[i],&w[i]);
    int dp[n+1][W+1]={};
    for(int i=n-1;i>=0;i--){
      for(int j=0;j<=W;j++){
	if(j-w[i]<0)dp[i][j]=dp[i+1][j];
	else if(j-w[i]>=0)dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
      }
    }
    int ma=dp[0][W];
    int weight=W;
    for(int i=W;i>=0;i--){
      if(ma==dp[0][i]){
      weight=i;
      }else
	break;
    }
    cout<<"Case"<<" "<<cnt<<':'<<endl;
    cout<<dp[0][W]<<endl;
    cout<<weight<<endl;
    cnt++;
  }
  return 0;
}

