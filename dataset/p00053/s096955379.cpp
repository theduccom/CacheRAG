#include<iostream>
#include<cstdio>
using namespace std;

bool prime[1000000];
int main(){
	int n;
	while (cin >> n, n){
		long long sum = 0;
		int cntprime = 0;
		for (int i = 2;; i++){
			if (prime[i]) continue;
			cntprime++;
			sum += i;
			if (cntprime == n){
				printf("%d\n", sum);
				break;
			}
			for (int j = 2; i*j < 1000000; j++){
				prime[i * j] = true;
			}
		}
	}
	return 0;
}