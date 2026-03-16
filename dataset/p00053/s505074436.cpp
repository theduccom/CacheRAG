#include <iostream>
using namespace std;
int main(void){
	int prime[10002];
	int sum[10002];
	prime[1] = 2;
	prime[2] = 3;
	sum[1] = 2;
	sum[2] = 5;
	int ptr=3;
	for(int num=5; ptr<=10000; num++){
		bool f = false;
		for(int i=1; i<ptr; i++){
			if(num%prime[i]==0) {
				f = true;
				break;
			}
		}
		if(!f) {
			prime[ptr++] = num;
			sum[ptr-1] = sum[ptr-2] + prime[ptr-1];
		}
	}
	int n;
	while(cin >> n){
		if(!n) break;
		cout << sum[n] << endl;
	}
	return 0;
}