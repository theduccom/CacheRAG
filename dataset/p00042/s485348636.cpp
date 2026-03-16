#include <iostream>
#include <algorithm>
#include <string>
#define N1 1001
using namespace std;
int Change(string);
void DP();
int N,W,n,v[N1],w[N1];
int main(){
  int t,i,j;
  string in;
  n=1;
  while(1){
    cin >> W;
    if(W==0) break;
    cin >> N;
    for(i=1;i<=N;i++){
      cin >> in;
      for(j=0;j<in.size();j++){
	if(in[j]==','){
	  t=j;
	  break;
	}
      }
      v[i]=Change(in.substr(0,t));
      w[i]=Change(in.substr(t+1,in.size()-t-1));
    }
    DP();
  }
  return 0;
}
int Change(string str){
  int len=str.size(),ret=0,x=1,i=0;
  while(len){
    ret=ret*x+(str[i]-'0');
    i++;
    x=10;
    len--;
  }
  return ret;
}
void DP(){
  int dp[N1][N1],c[N1][N1],maxv,minw,x,y,t,sum,i,j,k;
  for(i=0;i<=W;i++) dp[0][i]=0;
  for(i=0;i<=N;i++) dp[i][0]=0;
  maxv=0;
  for(i=1;i<=N;i++){
    for(j=1;j<=W;j++){
      if(j>=w[i]){
	if(dp[i-1][j]<dp[i-1][j-w[i]]+v[i]){
	  dp[i][j]=dp[i-1][j-w[i]]+v[i];
	  c[i][j]=1;
	}
	else{
	  dp[i][j]=dp[i-1][j];
	  c[i][j]=0;
	}
      }else{
	dp[i][j]=dp[i-1][j];
	c[i][j]=0;
      }
      maxv=max(maxv,dp[i][j]);
    }
  }
  minw=2000000000;
  for(i=1;i<=N;i++){
    for(j=1;j<=W;j++){
      if(maxv==dp[i][j]){
	t=j;
	sum=0;
	for(k=i;k>=1;k--){
	  if(c[k][t]==1){
	    sum+=w[k];
	    t-=w[k];
	  }
	}
	minw=min(minw,sum);
      }
    }
  }
  cout << "Case " << n << ':' << endl;
  cout << maxv << endl << minw << endl;
  n++;
}