#include <stdio.h>
#include <math.h>
#define N 50001

void Eratos(void);
int prime[N];

int main(void){
	int n;
	int p[N];
	int num = 0;
	int ans;

	Eratos();
	for(int i=0; i<N; i++){
		if(prime[i] == 1){
			p[num] = i;
			num++;
		}
	}

	while(1){
		ans = 0;
		scanf("%d", &n);
		if(n == 0) break;

		for(int i=0; i<num && n/2 >= p[i]; i++){
			if(prime[n - p[i]] == 1){
				ans++;
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}

void Eratos(void){
	for(int i=0; i<N; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;

	for(int i=2; i<=sqrt(N); i++){
		for(int j=2; i*j < N; j++){
			prime[i*j] = 0;
		}
	}
}