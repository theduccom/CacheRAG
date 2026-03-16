#include <cstdio>

using namespace std;

const int SIEVE_SIZE = 100000;

bool sieve[SIEVE_SIZE + 1];
int prime[SIEVE_SIZE + 1];

int main()
{
	int n;
	int i,j,cnt = 0;
	
	sieve[0] = sieve[1] = true;
	for (i = 2; i * i <= SIEVE_SIZE; i++){
		if (sieve[i]) continue;
	   	for (j = i*i; j <= SIEVE_SIZE; j += i){
	    	 sieve[j] = true;
	    }
	}
	
	for (i = 0; i < SIEVE_SIZE ; i++){
		if (!sieve[i]){
			prime[cnt++] = i;
		}
	}
	
	int sa;
	
	while (scanf("%d", &n), n != 0){
		cnt = 0;
		
		for (i = 0; prime[i] <= n/2; i++){
			sa = n - prime[i];
			if (sieve[sa] == false){
				cnt++;
			}
		}
		
		printf("%d\n", cnt);
	}
}