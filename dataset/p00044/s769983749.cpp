#include <iostream>

using namespace std;

const int MAX = 1000100;
bool prime[MAX];

void sieve(){
	fill(prime, prime+MAX, true);
	prime[0] = prime[1] = false;

	for(int i=2; i*i < MAX; i++){
		if(!prime[i]) continue;
		for(int j=i*i; j < MAX; j += i) prime[j] = false;
	}
}


int main(){
	int n;
	sieve();
	while(cin >> n){
		for(int i=1; ; i++) if(prime[n-i]){ cout << n-i << " "; break;}
		for(int i=1; ; i++) if(prime[n+i]){ cout << n+i << endl; break;}
	}
}