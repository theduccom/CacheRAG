#include<iostream>
#include<cmath>
#include<climits>
#include<cstdio>

bool isPrime(int n){
	bool bRet = true;

	if( n == 1 || n == 2 ) return true;
	for(int i = 2; i <= sqrt( (double)n ); i++){
		if( n % i == 0 ){
			bRet = false;
		}
	}
	return bRet;
}

int smallPrime(int n){
	for(int i = n - 1; i >= 2; i--){
		if( isPrime( i ) ) return i;
	}
	return 1;
}

int largePrime(int n){
	for(int i = n + 1; i < INT_MAX; i++){
		if( isPrime( i ) ) return i;
	}
}

int main(void){
	while( true ){
		int n;

		if( scanf("%d", &n) != 1 ){
			break;
		}

		printf("%d %d\n", smallPrime( n ), largePrime( n ));
	}
	return 0;
}