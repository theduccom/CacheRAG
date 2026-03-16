#include <stdio.h>

int isprime(int n) {
	int i;
	for(i = 2; i * i <= n; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n,i;
	int sousi[2];
	int prime[10100][2];
	for (i = 0; i < 10100; i++) {
		prime[i][0] = i;
		prime[i][1] = isprime(i);
	}
	while(1) {
		sousi[0] = 0;
		sousi[1] = 0;	 
		scanf("%d",&n);
		if(n == 0) {
			break;
		}
		for(i = n; i > 2; i--) {
			if(prime[i][1] == 1 && prime[i - 2][1] == 1) {
				sousi[0] = prime[i - 2][0];
				sousi[1] = prime[i][0];
				break;
			}
		}
		printf("%d %d\n",sousi[0],sousi[1]);
	}
	return 0;
}