#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int W,n,temp,num=1,q,p;
	int dp[2000];
	int w[1005],v[1005];
	while(cin>>W,W){
		cin>>n;
		for(int i=0;i<n;i++)
		scanf("%d,%d",&v[i],&w[i]);
		for(int i=0;i<=W;i++)
		dp[i]=0;
		for(int i=0;i<n;i++){
			for(int j=W;j>=w[i];j--){
				dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
			}
		}
		temp=W;
		while(dp[temp]==dp[W])
			temp--;
		cout<<"Case "<<num<<':'<<endl;
		cout<<dp[W]<<endl;
		cout<<temp+1<<endl;
		num++;
	}
	return 0;
}