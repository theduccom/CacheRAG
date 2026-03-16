#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
using namespace std;
int dp[1000001],flg[1000001];
int main(void)
{
	for(int i=2;i<=1000000;i++) flg[i]=1;
	for(int i=2;i*i<=1000000;i++){
		if(flg[i]==1){
			for(int j=2;j*i<1000000;j++) flg[i*j]=0;
		}
	}
	int kin[30],n,x;
	while(1) {
		cin>>n>>x;
		if(n==0 && x==0) break;
		for(int i=0;i<n;i++) cin>>kin[i];
		for(int i=0;i<=x;i++) dp[i]=0;
		dp[0]=1;
		for(int i=0;i<n;i++) {
			for(int j=0;j<=x;j++) 
				if(dp[j]==1) {
					if(j+kin[i]<=x) dp[j+kin[i]]=1;
				}
		}
		
		int no=0,data;
		for(int i=x;i>1;i--) {
			if(flg[i]==1 && dp[i]==1){data=i;no=1;break;}
		}
		if(no==0) cout<<"NA"<<endl;
		else cout<<data<<endl;
	}
}
		
	