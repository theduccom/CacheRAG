#include<iostream>

using namespace std;

#define XMAX 1000000
#define NMAX 30
#define NO -1
#define YES 1

int main(void){

	int erato[XMAX+1];

	for(int i=0;i<=XMAX;i++) erato[i]=YES;
	erato[0]=NO,erato[1]=NO;

	for(int i=2;i<=XMAX;i++){
		if(erato[i]==YES){
			for(int j=i+i;j<XMAX;j+=i){
				erato[j]=NO;
			}
		}
	}

	int n,x;
	int dp[XMAX+1];
	int price[NMAX];
	bool f;
	int ans;

	while(1){

		cin>>n>>x;
		if(n==0&&x==0) break;

		for(int i=0;i<n;i++){
			cin>>price[i];
		}

		for(int i=0;i<=x;i++) dp[i]=NO;
		dp[0]=YES;

		while(1){
			f=false;
			for(int i=0;i<x;i++){
				if(dp[i]==YES){
					for(int j=0;j<n;j++){
						if(i+price[j]<=x){
							if(dp[i+price[j]]==NO){
								f=true;
								dp[i+price[j]]=YES;
							}
						}
					}
				}
			}
			if(!f) break;
		}
		ans=-1;
		for(int i=x;i>=0;i--){
			if(dp[i]==YES&&erato[i]==YES){
				ans=i;
				break;
			}
		}

		if(ans==-1) cout<<"NA"<<endl;
		else cout<<ans<<endl;
	}

}