#include <iostream>
#include <cstdio>
#include <cmath>

#define reep(i,n,m) for(int i=n;i<m;i++)
#define rep(i,n) reep(i,0,n)

using namespace std;

#define MAX 1000000 

bool prime[MAX+1];
void setPrime(){
	reep(i,2,MAX+1){
		if(prime[i])
			continue;
		bool flg=true;
		reep(k,2,sqrt(i)+1){
			if(i%k==0){
				flg = false;
				break;
			}
		}
		if(flg){
			for(int k=i+i;k<MAX+1;k+=i){
				prime[k] = true;
			}
		}
	}	
}

int main(){
	int n,x;
	setPrime();
	while(cin >> n >> x,n){

		bool dp[MAX+1] = {0};
	
		rep(i,n){
			int v;
			cin >> v;
			dp[v] = true;
			reep(k,v,x+1){
				if(dp[k-v]){
					dp[k] = true;
				}	
			}	
		}

		bool flg = true;
		for(int i=x;i>1;i--){
			if(!prime[i] && dp[i]){
				flg = false;
				printf("%d\n",i);
				break;
			}
		}
		if(flg){
			puts("NA");
		}

	}
	return 0;
}