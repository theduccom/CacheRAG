#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
using namespace std;

int prime[1000010];//i??????????´???°
bool is_prime[1000010]; //is_prime[i]???true??????i????´???°

void sieve(int n){ //n??\???????´???°?????????
	int p=0;
	for(int i=0;i<=n;i++) is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			prime[p++]=i;
			for(int j=2*i;j<=n;j+=i) is_prime[j]=false;
		}
	}
}

int main(){
	int n;
	sieve(1000000);
	int sum[10010]={};
	rep(i,1,10001){
		sum[i]+=sum[i-1]+prime[i-1];
	}
	while(1){
		cin>>n;
		if(n==0) break;
		cout<<sum[n]<<endl;
	}
}