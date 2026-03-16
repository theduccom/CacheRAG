#include<iostream>

int n;
int p;
bool isprime[50001];
int prime[50001];
int flg[25000001];

void sieve( int x )
{
 	p = 0;
	
	isprime[0] = isprime[1] = false;
	for( int i = 2; i <= x; i++ ) isprime[i] = true;
	
	for( int i = 2; i <= x; i++ ){
	 	if( isprime[i] ){
			prime[p++] = i;
			
			for( int j = i * 2; j <= x; j += i ) isprime[j] = false;
		}
	}
}

int main()
{
	sieve( 50000 );

	for( int i = 0; i < p; i++ ){
		for( int j = i; j < p; j++ ){
			flg[ prime[i] + prime[j] ]++;
		}
	}

	while( 1 ){
		std::cin >> n;
		if( !n ) break;
		
		std::cout << flg[n] << std::endl;
	}
	
 	return 0;
}