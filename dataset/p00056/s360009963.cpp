#include <bits/stdc++.h>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
using namespace std;

bool prime[50010];

void init(){
	range(i,2,50010){
		prime[i]=true;
		for(int j=2;j*j<=i;++j){
			if(i%j==0) prime[i]=false;
		}
	}
	return ;
}

int main(void){
	int n;
	init();
	while(cin >> n,n){
		int res=0;
		range(i,2,n+1){
			int j=n-i;
			if(i>j) break;
			if(prime[i]&&prime[j]) res++;
		}
		cout << res << endl;
	}
}