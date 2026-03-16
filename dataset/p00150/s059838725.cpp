#include <stdio.h>

const int MAX_V = 1000000;
int prime[MAX_V+1];
int main() {
  int i, k, n, j, p1, q1;
  for( i = 2; i <= MAX_V; i++ ) {
    prime[i] = 1;
  }
  for( i = 2; i*i <= MAX_V; i++ ) {
    if (prime[i] ) {
      for( k = 2 * i; k <= MAX_V; k += i ) {
        prime[k] = 0;
      }
    }
  }
  for( ;; ) {
    scanf( "%d", &n );
    if( n == 0 )break;
    for( j = 2; j <= n; j++ ) {
      int isprime = prime[j];
      int isprimee = prime[j-2];
      if( isprime == 1 && isprimee == 1 ) {
        q1 = j;
        p1 = q1 - 2;
      }
    }
    printf( "%d %d\n", p1, q1 );
  }
  return 0;
}