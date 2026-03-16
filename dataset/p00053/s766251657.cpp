#include<iostream>
#include<vector>
using namespace std;

int main(){
	int dt[150000];
	dt[0]=0;
	dt[1]=0;
	for(int i=2;i<150000;i++){
		dt[i]=1;
	}
	for(int i=2;i<750;i++){
		for(int j=2*i;j<150000;j+=i){
			dt[j]=0;
		}
	}
	vector<int> prime;
	for(int i=0;prime.size()<10001;i++){
		if(dt[i]==1){
			prime.push_back(i);
		}
	}
	unsigned long long sum[10001];
	sum[0]=0;
	sum[1]=prime[0];
	for(int i=2;i<10001;i++){
		sum[i]=sum[i-1]+prime[i-1];
	}
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		cout<<sum[n]<<endl;
	}
	return 0;
}