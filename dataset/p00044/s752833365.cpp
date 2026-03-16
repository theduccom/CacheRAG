#include <stdio.h>
#include <math.h>
#define N 50060

void Eratos(void);

int prime[N];

int main(void){
	int n;
	int lessmax, bigmin;

	Eratos();

	while(scanf("%d", &n) != EOF){
		for(int i=n-1;; i--){
			if(prime[i] == 1){
				lessmax = i;
				break;
			}
		}
		for(int i=n+1;; i++){
			if(prime[i] == 1){
			   	bigmin = i;
				break;
			}
		}

		printf("%d %d\n", lessmax, bigmin);
	}

	return 0;
}

void Eratos(void){
	for(int i=0; i<N; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;

	for(int i=2; i <= sqrt(N); i++){
		for(int j=2; i*j < N; j++){
			prime[i*j] = 0;
		}
	}
}