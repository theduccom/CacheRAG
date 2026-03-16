/*
 * src.cpp
 *
 *  Created on: 2016/07/29
 *      Author: joi
 */

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

const int MAX_N=30,MAX_X=1e6;

int n,x;
int l[MAX_N];

bool prime[MAX_X+1];

void sieve(){
	memset(prime,1,sizeof(prime));
	prime[0]=false;
	for (int i=2;i*i<=MAX_X;i++){
		if (prime[i]){
			for (int j=2*i;j<=MAX_X;j+=i){
				prime[j]=false;
			}
		}
	}
}

bool dp[MAX_X+1];

int main(){
	sieve();
	do{
		cin>>n>>x;
		if (n || x){
			REP(i,n){
				cin>>l[i];
			}
			memset(dp,0,sizeof(dp));
			dp[0]=true;
			REP(i,n){
				FOR(j,l[i],x+1){
					dp[j]|=dp[j-l[i]];
				}
			}
			int res=-1;
			for(int i=x;i>=1;i--){
				if (dp[i] && prime[i]){
					res=i;
					break;
				}
			}
			if (res==-1){
				cout<<"NA"<<endl;
			}else{
				cout<<res<<endl;
			}
		}
	}while (n || x);
	return 0;
}