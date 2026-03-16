#include <iostream>
#include <math.h>

#define N 10001

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
		int p1,q1,w=3;
		for(int i=n;i>=3;--i){
			if(isprime[i]&&isprime[i-2]){
				q1=i;
				p1=i-2;
				break;
			}
		}
		cout<<p1<<" "<<q1<<"\n";
	}
	return 0;
}