#include <iostream>
#include <math.h>

#define N 1000001

using namespace std;

int main(void){
	bool isprime[N];
	for(int i=0;i<N;i++) isprime[i]=true;
	int upto = (int)sqrt(N);
	for(int i=2;i<=upto;i++){
		if(isprime[i]){//消されてなければその倍数を消す
			for(int j=2;i*j<=N;j++) isprime[i*j] = false;
		}
	}
	int n;
	while(cin >> n){
		if(!n)break;
		int count = 0;
		long long sum = 0;
		for(int i=2;count<n;i++){
			if(isprime[i]){
				sum += i;
				count++;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}