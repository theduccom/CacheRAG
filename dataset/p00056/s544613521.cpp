#include <iostream>

using namespace std;

int main(){
	int prime[10000],p = 3,n;
	bool isprime[50001];
	prime[1] = 2,prime[2] = 3;
	isprime[1] = isprime[4] = false;
	isprime[2] = isprime[3] = true;
	for(int i=5;i < 50001;i++){
		int f = 0;
		for(int j=1;prime[j]*prime[j] <= i;j++) if(i % prime[j] == 0) {f = 1;break;}
		if(!f) prime[p++] = i,isprime[i] = true;
		else isprime[i] = false;
	}
	
	while(1){
		int out = 0;
		cin >> n;
		if(!n) break;
		for(int i = 1;n >= 2 * prime[i];i++) if(isprime[n-prime[i]]) out++;
		cout << out << endl;
	}
		
	return 0;
}