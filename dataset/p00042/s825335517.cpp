#include <iostream>
#include <algorithm>
#include <string>
#define N1 1001
using namespace std;
int Change(string);
void DP();
int N,W,n,v[N1],w[N1],dp[N1][N1];
int main(){
  int t,len,i,j;
  string in;
  n=1;
  while(1){
    cin >> W;
    if(W==0) break;
    cin >> N;
    for(i=1;i<=N;i++){
      cin >> in;
      len=in.size();
      for(j=0;j<len;j++){
	if(in[j]==','){
	  t=j;
	  break;
	}
      }
      v[i]=Change(in.substr(0,t));
      w[i]=Change(in.substr(t+1,len-t-1));
    }
    DP();
  }
  return 0;
}
int Change(string s){
  int ret=0,len=s.size(),i=0,x=1;
  while(len){
    ret=ret*x+(s[i]-'0');
    x=10;
    i++;
    len--;
  }
  return ret;
}
void DP(){
  int i,j,sum[N1][N1],wsum;
  for(i=0;i<=W;i++) dp[0][i]=0,sum[0][i]=0;
  for(i=0;i<=N;i++) dp[i][0]=0,sum[i][0]=0;
  for(i=1;i<=N;i++){
    for(j=1;j<=W;j++){
      if(j>=w[i]){
	if(dp[i-1][j]<=dp[i-1][j-w[i]]+v[i]){
	  dp[i][j]=dp[i-1][j-w[i]]+v[i];
	  sum[i][j]=1;
	}else{
	  dp[i][j]=dp[i-1][j];
	  sum[i][j]=0;
	}
      }else{
	dp[i][j]=dp[i-1][j];
	sum[i][j]=0;
      }
    }
  }
  wsum=0;
  int cp=W;
  for(i=N;i>=1;i--){
    if(sum[i][cp]==1){
      wsum+=w[i];
      cp-=w[i];
    }
  }
  cout << "Case " << n << ':' << endl;
  n++;
  cout << dp[N][W] << endl << wsum  << endl;
}