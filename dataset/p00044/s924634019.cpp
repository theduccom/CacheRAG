#include <iostream>
#include <cmath>
bool prime[51001];
using namespace std;
int main(){
	int i,j,n;

	for (i = 3; i <= 51000; i += 2){
		prime[i] = true;
	}
	prime[2] = true;

	for (i = 3; i <= (int)sqrt(51000.); i += 2){
		if (prime[i] == 1){
			for (j = 3; j <= 51000 / i; j += 2){
				prime[i * j] = false;
			}
		}
	}
	while(cin >> n && n){
		for(i=n-1;i>1;i--){
			if(prime[i]){
				cout << i << " ";
				break;
			}
		}
		for(i=n+1;i<51001;i++){
			if(prime[i]){
			cout << i << endl;
			break;
			}
		}
	}
	return 0;
}