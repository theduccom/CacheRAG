#include <iostream>
#include <cmath>
using namespace std;

int Prime[50000];

int isPrime(int n){
	int sq = sqrt((double)n);
	if(n==1)return 0;
	if(n==2)return 1;
	for(int i=2;i<=sq;++i)
		if(n%i==0)return 0;
	return 1;
}

int main() {
	int n,cnt;
	
	for(int i=0;i<50000;++i){
		Prime[i] = isPrime(i+1);
	}
	
	while(cin>>n,n){
		cnt = 0;
		if(isPrime(n-2))++cnt;
		for(int i=3;i<=n/2;i+=2){
			cnt += Prime[i-1] && Prime[n-i-1];
		}
		
		cout << cnt << endl;
	}
	return 0;
}