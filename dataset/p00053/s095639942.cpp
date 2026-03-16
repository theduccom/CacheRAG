#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int prime[1000000],n;
bool isprime[1000001];

int sieve(int n){
	int p=0;
	for(int i=0;i<=n;i++)isprime[i]=true;
	isprime[0]=isprime[1]=false;
	for(int i=0;i<=n;i++){
		if(isprime[i]){
			prime[p++]=i;
			for(int j=i*2;j<=n;j+=i)isprime[j]=false;
		}
	}
	return p;
}

int main(){
	sieve(1000000);
	while(cin>>n){
		if(n==0)return 0;
		int ans=0;
		for(int i=0;i<n;i++)ans+=prime[i];
		cout<<ans<<endl;
	}
}