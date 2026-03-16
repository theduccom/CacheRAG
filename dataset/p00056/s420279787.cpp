#include<iostream>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	bool prime[100000];
	rep(i,100000)prime[i]=true;
	prime[0]=false;
	prime[1]=false;
	loop(i,2,1000){
		for(int j=i*2;j<100000;j+=i){
			prime[j]=false;
		}
	}
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		int cnt=0;
		rep(i,n/2+1){
			if(prime[n-i] && prime[i]){
				cnt++;
				//cout<<i<<" "<<n-i<<endl;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}