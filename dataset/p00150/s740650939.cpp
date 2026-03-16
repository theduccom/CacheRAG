#include <stdio.h>

int isprime( int n ) {
  for( int i = 2; i * i <= n; i++ ) {
    if( n % i == 0 ) return 0;
  }
  return 1;
}

int main() {
  int n, i, p1, q1, result, resultt;
  for( ;; ) {
    scanf( "%d", &n );
    if( n == 0 )break;
    for( i = n; i >= 0; i-- ) {
      result = isprime( i );
      resultt = isprime( i - 2 );
      if( result == 1 && resultt == 1 ) {
        q1 = i;
        p1 = q1 - 2;
        break;
      }
    }
    printf( "%d %d\n", p1, q1 );
  }
  return 0;
}