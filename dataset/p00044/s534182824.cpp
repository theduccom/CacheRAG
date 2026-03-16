#include <iostream>
#include <cstring>
using namespace std;


int prime[60000];


void sieve(){
	memset(prime, 1, sizeof prime);
	int i;
	for(i = 2;i*i <= 60000;i++){
		if(prime[i]){
			for(int j = 2;i*j <= 60000;j++){
				prime[i*j] = 0;
			}
		}
	}
}


int main(){
	int n;
	sieve();
	while (cin >> n){
		for(int i = n-1;;i--){
			if(prime[i]){
				cout << i << ' ';
				break;
			}
		}
		for(int i = n+1;;i++){
			if(prime[i]){
				cout << i << endl;
				break;
			}
		}
	}
	
	return 0;
}