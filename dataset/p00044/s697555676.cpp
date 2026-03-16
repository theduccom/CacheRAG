#include <iostream>
#include <vector>
using namespace std;
int lim = 1e5;

int main(){
	vector<bool> prime(lim, true);
	prime[0] = prime[1] = false;
	for(int i=2; i*i<lim; i++){
		if(prime[i]){
			for(int j=i*2; j<lim; j+=i){
				prime[j] = false;
			}
		}
	}

	int n;
	while(cin >> n){
		for(int i=n-1; ; i--){
			if(prime[i]){
				cout << i << " ";
				break;
			}
		}
		for(int i=n+1; ; i++){
			if(prime[i]){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
