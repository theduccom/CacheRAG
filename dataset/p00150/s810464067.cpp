#include <iostream>
using namespace std;

int main(){
	int prime[10001] = { 0 };
	int i,j,n;
	for(i = 3;i<=10000;i+=2){
		prime[i] = 1;
	}
	prime[2] = 1;
	for(i = 3;i<=100;i+=2){
		if(prime[i] == 1){
			for(j = 3;j<=10000/i;j+=2){
				prime[i*j] = 0;
			}
		}
	}
	while(cin >> n && (n != 0)){
		for(i = n;i>=5;i--){
			if(prime[i] == 1 && prime[i-2] == 1){
				cout << i-2 << " " << i << endl;
				break;
			}
		}
	}
	return 0;
}