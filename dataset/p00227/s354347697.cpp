#include <cstdio>
#include <algorithm>
#include <functional>

#define N 1000

using namespace std;

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  int i;

  for ( ; ; )
  {
    int d[ N ];
    int res = 0;
    int n, m;

    scanf ( "%d%d", &n, &m );
    if ( !( n | m ) ) break ;

    for ( i = 0; i < n; ++i )
    {
      scanf ( "%d", d + i );
    }
    sort ( d, d + n, greater< int > ( ) );

    for ( i = 0; i < n; ++i )
    {
      res += ( i + 1 ) % m
           ? d[ i ] : 0;
    }

    printf ( "%d\n", res );
  }

  return ( 0 );
}