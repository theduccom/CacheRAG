#include <iostream>
#include <string.h>
using namespace std;

bool prime[1000001];
void is_prime(int n){
	for(int i = 0; i <= n; ++i)
		prime[i] = true;
	prime[0] = prime[1] = false;
	
	for(int i = 2; i <= n; ++i){
		if(prime[i]){
			for(int j = i * 2; j <= n; j += i)
				prime[j] = false;
		}
	}
}

bool DP[1000001];
int N, X;

int main() {
	is_prime(1000000);
	while(cin >> N >> X && (N || X)){
		int cook[50], ans = 0;
		memset(DP, 0, sizeof(DP));
		
		for(int i = 0; i < N; ++i){
			cin >> cook[i];
			DP[cook[i]] = true;
		}
		
		for(int i = 0; i < N; ++i){
			for(int j = 0; j <= X; ++j){
				if(DP[j] && j + cook[i] <= X)
					DP[j + cook[i]] = true;
			}
		}
			
		for(int i = 0; i <= X; ++i)
			if(DP[i] && prime[i])
				ans = i;
		if(ans == 0)
			cout << "NA" << endl;
		else
			cout << ans << endl;
	}
	
	
	return 0;
}