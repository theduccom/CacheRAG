#include <cstdio>
#include <algorithm>

#define N   50000
#define PN  5133

using namespace std;

static
int p[ PN ];
static
int furui[ N + 1 ] = { 0 };

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  int i, j;
  int pn;

  pn = 0;
  for ( i = 2; i <= N; ++i )
  {
    if ( furui[ i ] ) continue ;

    p[ pn++ ] = i;
    for ( j = i; j <= N; j += i )
    {
      furui[ j ] = 1;
    }
  }

  for ( ; ; )
  {
    int res = 0;
    int n;

    scanf ( "%d", &n );
    if ( !n ) break ;

    for ( i = 0; p[ i ] <= n / 2; ++i )
    {
      res += !!( binary_search ( p, p + pn, n - p[ i ] ) );
    }

    printf ( "%d\n", res );
  }

  return ( 0 );
}