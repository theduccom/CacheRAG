#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, prime[10000], cnt = 1;
	prime[0] = 2;
	for (int i = 3; cnt < 10000; i += 2){
		int k = 0;
		for (int j = 3; j <= sqrt(i); j++) {
			if (i % j == 0){
				k = 1;
				break;
			}
		}
		if (!k) {
			prime[cnt] = prime[cnt - 1] + i;
			cnt++;
		}
	}
	while (1){
		cin >> n;
		if (!n) break;
		cout << prime[n - 1] << endl;
	}
}