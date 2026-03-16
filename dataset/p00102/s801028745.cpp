#include<iostream>
#include<string>
using namespace std;
int main(){
	int dp[15][15];
	int n;
	while(true){
	cin>>n;
	if(n==0)
		break;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>dp[i][j];
	int x=0;
	for(int i=0;i<n;i++){
		int h=0;
		for(int j=0;j<n;j++)
			h+=dp[i][j];
		dp[i][n]=h;
		x+=h;
	}
	for(int i=0;i<n;i++){
		int h=0;
		for(int j=0;j<n;j++)
			h+=dp[j][i];
		dp[n][i]=h;
	}
	dp[n][n]=x;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			int k=1,h=10;
			while(true){
				if(dp[i][j]<h)
					break;
				h*=10;
				k++;
			}
			for(int l=0;l<5-k;l++)
				cout<<" ";
			cout<<dp[i][j];
		}
		cout<<endl;
	}
	}
	return 0;
}