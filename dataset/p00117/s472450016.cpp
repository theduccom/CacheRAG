#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n,sum,m,dp[30][30],a,b,c,d,now,tar,mon,pri;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		if(i!=j)
			dp[i][j]=INT_MAX/2;
		else
			dp[i][j]=0;
	}
	for(int i=0;i<m;i++){
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		dp[a-1][b-1]=c;
		dp[b-1][a-1]=d;
	}
	scanf("%d,%d,%d,%d",&now,&tar,&mon,&pri);
	for(int k=0;k<n;k++)
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
	sum=dp[now-1][tar-1]+dp[tar-1][now-1]+pri;
	cout<<mon-sum<<endl;
	return 0;
}