// AOJ 0056: Goldbach's Conjecture
// 2017.10.28 bal4u@uu

#include <stdio.h>
#include <stdlib.h>

#define MAX  50000
#define HALF 2761		// prime[2760]=24989, prime[2761]=25013
char table[MAX+1];			// zero: if prime 
int sz, prime[5200] = {   	// prime[46] = 223, max sz = 5132
  3,  5,  7, 11, 13, 17, 19, 23, 29, 
 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 
 73, 79, 83, 89, 97,101,103,107,109,113, 
127,131,137,139,149,151,157,163,167,173, 
179,181,191,193,197,199,211,223 };
int ans[MAX+MAX] = {0,0,0,0,1,0};
char buf[10], *p;
char out[1206][5];

int main()
{
	int i, j, k;

	for (i = 0; i < 47; i++) {
		k = prime[i];
		for (j = k<<1; j < MAX; j += k) table[j] = 1;
	}
	for (sz = 0, i = 3; i <= MAX; i += 2) if (!table[i]) prime[sz++] = i;
	for (i = 0; i < HALF; i++) {
		k = prime[i];
		for (j = i; j < sz; j++) ans[k + prime[j]]++;
	}

	while (fgets(p=buf, 10, stdin) && *buf != '0') {
		i = 0; while (*p >= '0') i = (i<<3) + (i<<1) + (*p++ & 0xf);
		if (i & 1) putchar('1'-table[i-2]), putchar('\n');
		else {
			k = ans[i];
			if (!out[k][0]) sprintf(out[k], "%d", k);
			puts(out[k]);
		}
	}
	return 0;
}