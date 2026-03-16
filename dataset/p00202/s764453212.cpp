#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <queue>

using namespace std;

bool is_prime[2000000];
bool is_able[2000000];

int main(){
	
	int N = 1000001;
	
	for(int i = 0; i < N; i++){
		is_prime[i] = true;
	}
	
	is_prime[0] = false;
	is_prime[1] = false;
	
	for(int i = 2; i < N; i++){
		if(is_prime[i]){
			for(int j = i * 2; j < N; j += i){
				is_prime[j] = false;
			}
		}
	}
	
	int n, x;
	
	while(true){
		
		cin >> n >> x;
		
		if(n == 0 && x == 0){
			break;
		}
		
		int v[200];
		
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		
		for(int i = 0; i <= x; i++){
			is_able[i] = false;
		}
		
		is_able[0] = true;
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j <= x - v[i]; j++){
				if(is_able[j]){
					is_able[j + v[i]] = true;
				}
			}
		}
		
		int ans = 0;
		
		for(int i = x; i >= 0; i--){
			if(is_able[i] && is_prime[i]){
				ans = i;
				break;
			}
		}
		if(ans == 0){
			cout << "NA" << endl;
		}else{
			cout << ans << endl;
		}
		
	}
	
	return 0;
}