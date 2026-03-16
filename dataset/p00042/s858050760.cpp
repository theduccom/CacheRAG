//dp
#include<cstdio>
#include<iostream>
using namespace std;

int W,N,value[1000],weight[1000],cost;
int dp[1001][1001],data=0,w;
int main(){

  while(cin >>W){
    if(W==0)break;
    cin >>N;
    for(int i=0;i<=N;i++){
      for(int j=0;j<=W;j++){
	dp[i][j]=0;
      }
    }
    data++;
    for(int i=0;i<N;i++) scanf("%d,%d",&value[i],&weight[i]);
   
    for(int i=0;i<N;i++){ //どのお宝を選んでいるか
      for(int j=0;j<=W;j++){
	dp[i+1][j] = max (dp[i+1][j],dp[i][j]);
	if(j+weight[i]<=W)
	dp[i+1][j+weight[i]] = max(dp[i+1][j+weight[i]],dp[i][j]+value[i]);
      }
    }
    cost=dp[N][W];
    w=-1;
   
	for(int j=0;j<=W;j++){
	  if(dp[N][j] == cost){
	    w=j;
	    break;
	  }	  
	  //      cout <<weight[i]<<endl;
    }
      cout <<"Case "<<data<<":\n"<<cost<<endl<<w<<endl;
  }

  return 0;
}