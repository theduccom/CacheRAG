#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	bool prime[60000] = {};
	for (int i = 2; i < 60000; i++){
		if (prime[i]) continue;
		for (int j = 2; i * j < 60000; j++){
			prime[i * j] = true;
		}
	}
	int n, situ[2] = { -1, 1 };
	while (cin >> n){
		for (int i = 0; i < 2; i++){
			for (int j = 1;; j++){
				if (!prime[n + situ[i] * j]){
					printf("%d", n + situ[i] * j);
					if (i == 0) printf(" ");
					break;
				}
			}
		}
		puts("");
	}
	return 0;
}