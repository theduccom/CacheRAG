#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int pri[1010],wai[1010],dp[2][1010];
int main(){
	int W,N,cas=0;
	while(true){
		cas++;
		cin>>W;
		if(W==0) break;
		cin>>N;
		for(int i=1;i<=N;i++){
			scanf("%d,%d",&pri[i],&wai[i]);
		}
		fill(dp[0],dp[0]+W+1,0);
		fill(dp[1],dp[1]+W+1,0);
		int in=0,ou=1;
		for(int i=1;i<=N;i++){
			for(int j=0;j<=W;j++) dp[ou][j]=dp[in][j];
			for(int j=0;j<=W;j++){
				if(j+wai[i]<=W){
					dp[ou][j+wai[i]]=max(dp[ou][j+wai[i]],dp[in][j]+pri[i]);
				}
			}
			swap(in,ou);
		}
		int res=0,cnt=0;
		for(int i=0;i<=W;i++){
			if(res<dp[in][i]){
				res=dp[in][i];
				cnt=i;
			}
		}
		cout<<"Case "<<cas<<":"<<endl<<res<<endl<<cnt<<endl;
	}
	return 0;
}