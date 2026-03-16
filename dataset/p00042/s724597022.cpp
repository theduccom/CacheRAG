#include<iostream>
#include<string>
int dp[2000][2000];
using namespace std;
int main(){
	int t,n;
	int w[2000],v[2000];
	int k=0;
	char z;
	while(true){
	cin>>t;
	if(t==0)
		break;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=t;j++){
			dp[i][j]=-1;
		}
	}
	for(int i=0;i<n;i++){
		cin>>v[i]>>z>>w[i];
		dp[i][0]=0;
	}
	dp[0][w[0]]=v[0];
	for(int i=1;i<n;i++){
		for(int j=1;j<=t;j++){
			if(j-w[i]<0){
				if(dp[i-1][j]==-1)
					dp[i][j]=-1;
				if(dp[i-1][j]!=-1)
					dp[i][j]=dp[i-1][j];
			}
			if(j-w[i]>=0){
				if(dp[i-1][j]==-1&&dp[i-1][j-w[i]]==-1)
					dp[i][j]=-1;
				if(dp[i-1][j]==-1&&dp[i-1][j-w[i]]!=-1)
					dp[i][j]=dp[i-1][j-w[i]]+v[i];
				if(dp[i-1][j]!=-1&&dp[i-1][j-w[i]]==-1)
					dp[i][j]=dp[i-1][j];
				if(dp[i-1][j]!=-1&&dp[i-1][j-w[i]]!=-1){
					if(dp[i-1][j]>=dp[i-1][j-w[i]]+v[i])
						dp[i][j]=dp[i-1][j];
					if(dp[i-1][j]<dp[i-1][j-w[i]]+v[i])
						dp[i][j]=dp[i-1][j-w[i]]+v[i];
				}
			}
		}
	}
	int c=0;
	for(int j=0;j<=t;j++){
		if(dp[n-1][j]>c)
			c=dp[n-1][j];
	}
	k++;
	bool g=false;
	for(int j=0;j<=t;j++){
		if(c==dp[n-1][j]&&g==false){
			cout<<"Case "<<k<<":"<<endl;
			cout<<c<<endl;
			cout<<j<<endl;
			g=true;
		}
	}
	}
	return 0;
}