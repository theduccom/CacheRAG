#include <iostream>
using namespace std;

int main(){
	bool is_prime[1000000];

	is_prime[0]=is_prime[1]=false;
	for(int i=2; i<1000000; i++){
		is_prime[i]=true;
	}

	for(int i=2; i*i<1000000; i++){
		if(is_prime[i]){
			for(int j=i*i; j<1000000; j+=i){
				is_prime[j]=false;
			}
		}
	}

	while(true){
		int a;
		cin>>a;
		if(a==0)
			break;

		int cnt=0;
		for(int i=2; i<=a/2; i++){
			if(is_prime[i]){
				if(is_prime[a-i]){
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}