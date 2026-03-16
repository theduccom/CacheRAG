#include <stdio.h>
#define max 50010

int main(void) {
  long long i, j, k, n;
  bool prime[max];
  for(i = 0; i < max; ++i) prime[i] = true;
  prime[0] = prime[1] = false;
  for(i = 2; i < 250; ++i) if(prime[i]) for(j = 2; i * j < max; ++j) prime[i * j] = false;
  while( 1 ) {
    int ans = 0;
    scanf("%lld", &n);
    if(!n) break;
    for(i = 2; i <= n / 2; ++i) if(prime[i] && prime[n - i]) ++ans;
    printf("%d\n", ans);
  }
  return 0;
} 
