#include<iostream>
#include<vector>
#define loop(i,a,b) for(long long i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

bool prime[7000000];

int main(){
	rep(i,7000000)prime[i]=true;
	prime[0]=prime[1]=false;
	loop(i,2,10000){
		for(long long j=i*2;j<7000000;j+=i)prime[j]=false;
	}
	vector<long long> p;
	rep(i,7000000)if(prime[i])p.push_back(i);
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		long long sum=0;
		rep(i,n)sum+=p[i];
		cout<<sum<<endl;
	}
	return 0;
}