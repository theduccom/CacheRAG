#include <iostream>
#include <math.h>

#define N 50050

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
		int prm1,prm2;
		for(int i=n-1;i>1;--i){
			if(isprime[i]){
				prm1 = i;
				break;
			}
		}
		for(int i=n+1;i<N;++i){
			if(isprime[i]){
				prm2 = i;
				break;
			}
		}
		cout << prm1 << " " << prm2 << "\n";
	}
	return 0;
}