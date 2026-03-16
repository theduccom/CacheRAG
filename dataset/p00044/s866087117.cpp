#include <iostream>
using namespace std;

int prime[51000];

int main(){
	int n;
	
	for(int i = 2; i * i < 51000; ++i){
		if(!prime[i]){
			for(int j = i * i; j < 51000; j += i){
				prime[j] = 1;
			}
		}
	}
	
	while(cin >> n){
		for(int i = n - 1;; --i){
			if(!prime[i]){
				cout << i << ' ';
				break;
			}
		}
		for(int i = n + 1;; ++i){
			if(!prime[i]){
				cout << i << endl;
				break;
			}
		}
	}
}