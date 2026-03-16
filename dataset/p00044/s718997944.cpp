#include <stdio.h> 
int main(void) {
  int i, prime[90000], j, n;
  for(i = 0; i < 90000; ++i) prime[i] = 1;
  for(i = 2; i < 300; ++i) if(prime[i]) {
    for(j = 2; i * j < 90000; ++j) prime[i * j] = 0;
  }
  while(scanf("%d", &n) != EOF) {
    for(i = n - 1; i >= 2; --i) {
      if(prime[i]) {
        printf("%d ", i);
        break;
      }
    }
    for(i = n + 1; i < 90000; ++i) {
      if(prime[i]) {
        printf("%d\n", i);
        break;
      }
    }
  }
  return 0; 
} 
