#include <iostream>
using namespace std;

bool isPrime(int x){
	for(int i=2;i*i<=x;i++){
		if(x % i == 0){
			return false;
		}
	}
	return true;
}

int main(void){
	int n;

	while(cin>>n,n){
		for(int i=n;;i--){
			if(isPrime(i) && isPrime(i-2)){
				cout<<i-2<<" "<<i<<endl;
				break;
			}
		}
	}

	return 0;
}