#include <iostream>
#include <math.h>

#define N 50001

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
		if(n==0)break;
		int count=0;
		for(int i=2;i<=n/2;i++){
			if(isprime[n-i]&&isprime[i])count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}