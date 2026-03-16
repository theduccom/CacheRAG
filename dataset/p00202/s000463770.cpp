#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

const int N = 1000000;
int dt[40];
bool prime[N];
bool dp[N];

int main(void){
	int n, x,lm;
	rep(i,N){
		prime[i]=true;
	}
	for(int i=2;i<N;i++){
		for(int j=i*2;j<N;j+=i){
			prime[j]=false;
		}
	}

	while(cin>>n>>lm,n||lm){
		bool find = false;
		rep(i,N){
			dp[i]=false;
		}
		dp[0] = 1;
		loop(i,0,n){
			cin>>dt[i];
			rep(j,lm){
				if(j + dt[i] > lm)continue;
				dp[j + dt[i]] |= dp[j];
			}
			
		}
		//rep(i,sizeof(okapon))if(okapon[i])cout<<i<<endl;
		for(int i = lm ; i >= 0 ; i --){
			if(i==1){cout<<"NA"<<endl;break;}
			if(dp[i] && prime[i]){cout<<i<<endl;break;}
		}
	}
}