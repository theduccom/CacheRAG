#include<cstdio>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<set>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<=n;i++)

int sosu[1111111];
int dp[1211111];
int main(){
	
	sosu[0]=1;
	sosu[1]=1;
	
	for(int i=2;i<1111111;i++){
		if(sosu[i]==1)continue;
		for(int j=i+i;j<1111111;j+=i){
			sosu[j]=1;
		}
	}
	
	while(1){
		int n,m;
		cin>>n>>m;
		if(n==0)break;
		
		rep(i,1111111)dp[i]=0;
		dp[0]=1;
		
		int item[33];
		rep(i,n){
			cin>>item[i];
		}
		
		int ans=-1;
		rep(i,m+1){
			if(dp[i]==0)continue;
			if(sosu[i]==0)ans=i;
			rep(j,n){
				if(i+item[j]>m)continue;
				dp[i+item[j]]=1;
			}
		}
		if(ans==-1){
			puts("NA");
		}else{
			printf("%d\n",ans);
		}
	}
}