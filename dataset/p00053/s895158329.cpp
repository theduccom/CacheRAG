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

int ss[PS]={0};
	
int main(){
	
	int cnt = 1;
	
	set_prime();
	
	rep(i,PS){
		if(prime[i]==1){
			ss[cnt]=ss[cnt-1]+i;
			cnt++;
		}
	}
	
	
	
	int n;
	while(cin>>n,n){
		printf("%d\n",ss[n]);
	}
	
}