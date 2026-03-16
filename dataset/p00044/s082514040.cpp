#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

const int PS = 1000000;
int prime[PS];
int set_prime(){
	rep(i,PS)prime[i]=1;
	prime[0]=prime[1]=0;
	rep(i,PS){
		if(prime[i]==0)continue;
		for(int j=i*2;j<PS;j+=i)prime[j]=0;
	}
}



int main(){
	set_prime();
	
	int n;
	while(cin>>n){
		for(int i=n-1;i>=0;i--){
			if(prime[i]==1){
				printf("%d ",i);
				break;
			}
		}
		for(int i=n+1;i<PS;i++){
			if(prime[i]==1){
				printf("%d\n",i);
				break;
			}
		}
	}
}