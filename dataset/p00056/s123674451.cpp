#include<iostream>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	bool prime[50001];
	rep(i,50001)prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i<50001;i++){
		for(int j=i*2;j<50001;j+=i){
			prime[j]=false;
		}
	}
	int n;
	int cnt=0;
	while(cin>>n,n){
		cnt=0;
		for(int i=1;i<=n/2;i++){
			if(prime[i] && prime[n-i])cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}