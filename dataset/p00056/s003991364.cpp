#include <string>
#include <iostream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const double EPS = 1e-9;

int main(){
	static bool prime[50000];
	fill(prime, prime+50000, true);
	prime[0] = prime[1] = false;

	for(int i = 0; i < 50000; i++){
		if(prime[i]){
			for(int j = i*2; j < 50000; j+=i){
				prime[j] = false;
			}
		}
	}

	int n;
	while(cin >> n){
		if(n == 0){
			break;
		}
		int count = 0;
		for(int i = 0; i <= n/2; i++){
			if(prime[i] && prime[n-i]){
				count++;
			}
		}
		cout << count << endl;
	}

	
    return 0;
}