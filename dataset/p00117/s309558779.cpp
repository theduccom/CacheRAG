#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

struct edge{
	int city1,city2,cost1to2,cost2to1;
};



int main(){
	int n=0,m=0,start=0,goal=0,budget=0,treecost=0;
	cin>>n>>m;
	edge node[m+1];
	for(int i=1;i<=m;i++){
		scanf("%d,%d,%d,%d",&node[i].city1,&node[i].city2,&node[i].cost1to2,&node[i].cost2to1);
	}
	scanf("%d,%d,%d,%d",&start,&goal,&budget,&treecost);
	int dp[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=1000000000;
		}
	}
	for(int i=1;i<=m;i++){
		dp[node[i].city1][node[i].city2]=node[i].cost1to2;
		dp[node[i].city2][node[i].city1]=node[i].cost2to1;
	}
	for(int l=1;l<=n;l++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(!(j==k || k==l || l==j))dp[j][k]=min(dp[j][k],dp[j][l]+dp[l][k]);
			}
		}
	}
	cout<<budget-treecost-dp[start][goal]-dp[goal][start]<<endl;
	return 0;
}