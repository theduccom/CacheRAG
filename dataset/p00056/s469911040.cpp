#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, prime[10000], flag[50005] = {}, cnt = 1;
	prime[0] = 2;
	flag[2] = 1;
	for (int i = 3; i < 50000; i += 2){
		int k = 0;
		for (int j = 3; j <= sqrt(i); j++) {
			if (i % j == 0){
				k = 1;
				break;
			}
		}
		if (!k) {
			flag[i] = 1;
			prime[cnt] = i;
			cnt++;
		}
	}
	while (1){
		cnt = 0;
		cin >> n;
		if (!n) break;
		for (int i = 0; prime[i] <= n / 2; i++){
			if (flag[n - prime[i]]) cnt++;
		}
		cout << cnt << endl;
	}
}