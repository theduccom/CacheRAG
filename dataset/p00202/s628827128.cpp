#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
using namespace std;
int N,X;
int r[31];
bool sosu[1000001];
bool dp[1000001];
int solve(){
  int res=0;
  memset(dp,false,sizeof(dp));
  for(int i=0;i<N;i++) dp[r[i]]=true;
  for(int i=1;i<=X;i++){
    if(!dp[i]) continue;
    if(!sosu[i]) res=i;
    for(int j=0;j<N;j++){
      if(i+r[j]>X) continue;
      dp[i+r[j]]=true;
    }
  }
  return res;
}

main(){
  sosu[0]=true;
  sosu[1]=true;
  for(int i=2;i<1000001;i++){
    if(!sosu[i])
      for(int j=i*2;j<1000001;j+=i){
	if(j>1000000) break;
	sosu[j]=true;
      }
  }
  while(1){
    scanf("%d %d",&N,&X);
    if(N==0 && X==0) break;
    for(int i=0;i<N;i++){
      scanf("%d",&r[i]);
    }
    int res = solve();
    if(res==0) puts("NA");
    else printf("%d\n",res);
  }
}