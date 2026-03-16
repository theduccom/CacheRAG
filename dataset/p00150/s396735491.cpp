#include <stdio.h>

const int MAX_V = 10000;


int main() {
	int i, k, v;
	int sousi[2];
	int prime[MAX_V + 1];
	for (i = 2; i <= MAX_V; i++) {
		prime[i] = 1;
	}
	for (i = 2; i * i <= MAX_V; i++) {
		if (prime[i]) {
			for (k = 2 * i; k <= MAX_V; k += i) {
				prime[k] = 0;
			}
		}
	}
	while (1) {
		int isprime = prime[v];
		sousi[0] = 0;
		sousi[1] = 0;
		scanf("%d", &v);
		if (v == 0) {
			break;
		}
		for (i = v; i > 2; i--) {
			if (prime[i] == 1 && prime[i - 2] == 1) {
				sousi[0] = i - 2;
				sousi[1] = i;
				break;
			}
		}
		printf("%d %d\n", sousi[0], sousi[1]);
	}	
	return 0;
}