#include<iostream>
using namespace std;

bool is_prime[1000000];

int main(){

	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<1000000;i++){
		is_prime[i]=true;
	}

	for(int i=2;i*i<1000000;i++){
		if(is_prime[i]){
			for(int j=i*i;j<1000000;j+=i){
				is_prime[j]=false;
			}
		}
	}

	while(true){
		int n;
		cin>>n;

		if(n==0)
			break;

		int count=0;
		for(int i=2;i<=n/2;i++){
			if(is_prime[i]&&is_prime[n-i]){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0; 
}