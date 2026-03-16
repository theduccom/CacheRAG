#include <algorithm>
#include <cstdio>

#define N 8

using namespace std;

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  int n;
  int i;

  for ( scanf ( "%d", &n ); n--; )
  {
    char digs[ N ];
    int max = 0, min = 0;

    scanf ( " %c%c%c%c%c%c%c%c",
              digs, digs + 1, digs + 2, digs + 3,
              digs + 4, digs + 5, digs + 6, digs + 7 );

    for ( i = 0; i < N; ++i )
    {
      digs[ i ] -= '0';
    }
    sort ( digs, digs + N );
    for ( i = 0; i < N; ++i )
    {
      max = max * 10 + digs[ N - i - 1 ];
      min = min * 10 + digs[ i ];
    }
    printf ( "%d\n", max - min );
  }

  return ( 0 );
}