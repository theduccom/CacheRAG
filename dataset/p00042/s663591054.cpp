#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
#define M -1;
using namespace std;
int dp[1001][1001];
vector<int> value,weight;
int main(void) 
{
	int i,j,w,n,mm,mx,cnt=0;;
	while(1) {
		cin>>w;
		if(w==0) break;
		cin>>n;
		weight.resize(n);
		value.resize(n);
		for(i=0;i<n;i++) scanf("%d,%d",&value[i],&weight[i]);
		for(i=0;i<=n;i++){
			for(j=0;j<=w;j++) dp[i][j]=M;
		}
		dp[0][0]=0;
		for(i=0;i<n;i++) {
			for(j=0;j<=w;j++) {
				if(dp[i][j]!=-1) {
					dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
					if(j+weight[i]<=w) {
						dp[i+1][j+weight[i]]=max(dp[i+1][j+weight[i]],dp[i][j]+value[i]);
					}
				}
			}
		}
		mm=-1;mx=-1;
		for(i=0;i<=w;i++) {
			if(mx<dp[n][i]) {
				mx=dp[n][i];
				mm=i;
			}
		}
		cnt++;
		cout<<"Case"<<" "<<cnt<<":"<<endl;
		cout<<mx<<endl<<mm<<endl;
	}
	exit(0);
}
		
		