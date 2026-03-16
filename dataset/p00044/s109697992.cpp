#include<bits/stdc++.h>
using namespace std;

#define MAX_N 51000

int prime[MAX_N];
bool is_prime[MAX_N + 1];


void prime_generate(){
	int p = 0;
	for(int i = 0; i <= MAX_N; i++) is_prime[i] = true;

	is_prime[0] = is_prime[1] = false;

	for(int i = 2; i <= MAX_N; i++){
		if(is_prime[i]){
			prime[p++] = i;
			for(int j = 2 * i; j <= MAX_N; j += i) is_prime[j] = false;
		}
	}
}

void solve(int n){
	for(int i = 0; i < MAX_N; i++){
		if(prime[i] == n){
			cout << prime[i-1] << " " << prime[i+1] << endl;
			break;
		}
		else if(prime[i] > n){
			cout << prime[i-1] << " " << prime[i] << endl;
			break;
		}
		else continue;
	}
}

int main(){
	prime_generate();

	int n;
	while(cin >> n){
		solve(n);
	}
}