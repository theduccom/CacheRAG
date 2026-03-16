#include<bits/stdc++.h>
using namespace std;
bool DP[31][1145149];
int cost[31];
bool prime(int N){
	if(N==0)return false;
	for(int i=2;i*i<=N;i++){
		if(N%i==0)return false;
	}
	return true;
}
int main()
{
	while(true){
		int N,X;
		scanf("%d%d",&N,&X);
		if(N==0&&X==0)return 0;
		for(int i=0;i<N;i++)scanf("%d",&cost[i]);
		for(int i=0;i<=N;i++){
			for(int j=0;j<=X;j++){
				DP[i][j]=false;
			}
		}
		DP[0][0]=true;
		for(int i=1;i<=N;i++){
			for(int j=0;j<=X;j++){
				if(DP[i-1][j])DP[i][j]=true;
				if(j>=cost[i-1]&&DP[i-1][j-cost[i-1]])DP[i][j]=true;
				if(j>=cost[i-1]&&DP[i][j-cost[i-1]])DP[i][j]=true;
				
			}
		}
		bool F=true;
		for(int i=X;i>=1;i--){
			if(F&&DP[N][i]&&prime(i)){
				printf("%d\n",i);
				F=false;
			}
		}
		if(F)printf("NA\n");
	}
}