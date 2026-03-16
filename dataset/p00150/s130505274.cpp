#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	bool prime[10001];
	for(int i=0;i<=10000;i++) prime[i] = true;
	prime[0] = false;
	prime[1] = false;
	for(int i=2;i<=10000;i++){
		if(prime[i]){
			for(int j=2*i;j<=10000;j+=i){
				if(prime[j]) prime[j] = false;
			}
		}
	}
	
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		for(int i=n;i>2;i--){
			if(prime[i] && prime[i-2]){
				cout<<i-2<<" "<<i<<endl;
				break;
			}
		}
	}

	return 0;
}