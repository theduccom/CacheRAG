#include <stdio.h>
#include <math.h>

#define SIZE 100000
int prime[SIZE];

int sosu ( int n ) {
	int i , lim = (int)(sqrt(n));
	for ( i = 2; i <= lim; i++ ) {
		if ( n % i == 0 ) return 0;
	}
	return 1;
}

void tmp(void) {
	int i;
	prime[0] = prime[1] = 0;
	for ( i = 2; i < SIZE; i++ ) {
		prime[i] = sosu(i);
	}
	return;
}

int main (void) {
	int n , i , sosu1 , sosu2;
	tmp();
	
	while ( scanf("%d",&n) != EOF ) {
		for ( i = n - 1; ; i-- ) {
			if ( prime[i] ) {
				sosu1 = i;
				break;
			}
		}
		for ( i = n + 1; ; i++ ) {
			if ( prime[i] ) {
				sosu2 = i;
				break;
			}
		}
		printf("%d %d\n",sosu1,sosu2);
	}
	return 0;
}