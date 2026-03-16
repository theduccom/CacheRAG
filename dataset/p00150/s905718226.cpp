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

int prime[10000000];
bool isprime[10000001];

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
	sieve(1e+4);
	int n;
	while(cin>>n){
		if(!n)return 0;
		do{
			if(isprime[n]&&isprime[n-2]){
				cout<<n-2<<" "<<n<<endl;
				break;
			}
		}while(n--);
	}
}