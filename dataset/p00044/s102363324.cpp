#include <iostream>
#include <cmath>
using namespace std;

int prime[5144],size;

bool isPrime(int x){
	for(int i=0;i<size && prime[i]<=sqrt(x);i++){
		if(x % prime[i] == 0) return false;
	}
	return true;
}

void mkPrime(void){
	size = 1;
	prime[0] = 2;

	for(int i=3;i<50100;i+=2){
		if(isPrime(i)){
			prime[size++] = i;
		}
	}
}

int main(void){
	int i,x;

	mkPrime();

	while(cin>>x){
		for(i=0;prime[i]<x;i++);

		if(x == prime[i]){
			cout<<prime[i-1]<<" "<<prime[i+1]<<endl;
		}
		else{
			cout<<prime[i-1]<<" "<<prime[i]<<endl;
		}
	}

	return 0;
}