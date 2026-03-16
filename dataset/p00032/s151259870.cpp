#include "stdio.h"

#define SQ(X) ((X)*(X))

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  int A, B, O;
  int rectNum = 0,
      diamNum = 0;

  while ( scanf ( "%d,%d,%d", &A, &B, &O ) == 3 )
  {
    rectNum += !! ( SQ(A) + SQ(B) == SQ(O) );
    diamNum += !! ( SQ(A)         == SQ(B) );
  }

  printf ( "%d\n%d\n", rectNum, diamNum );

  return ( 0 );
}