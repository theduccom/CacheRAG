#include <cstdio>
using namespace std;

const int SIEVE_SIZE = 1000000;

bool sieve[SIEVE_SIZE + 1];
int prime_count[SIEVE_SIZE + 1];

int main()
{
	int i,j,n,l,r;
	
	sieve[0] = sieve[1] = true;
	for (i = 2; i * i <= SIEVE_SIZE; i++){
		if (sieve[i]) continue;
	   	for (j = i*i; j <= SIEVE_SIZE; j += i){
	    	 sieve[j] = true;
	    }
	}
	
	while(scanf("%d", &n) != EOF){
		for(l = n-1; sieve[l] == true; l--);
		for(r = n+1; sieve[r] == true; r++);
		printf("%d %d\n", l, r);
	}
	
	
	return(0);
}