#include <iostream>

using namespace std;

/** Application main entry point. */
int main (
  int     argc,
  char  * argv[ ]
  )
{
  while ( true )
  {
    bool  init = true;
    int   D;

    if ( !( cin >> D ) )  break ;

    for ( int mask = 1; mask <= 0x200; mask <<= 1 )
    {
      if ( D & mask )
      {
        if ( !init )
        {
          cout << " ";
        }
        cout << mask;
        init = false;
      }
    }
    cout << endl;
  }

  return ( 0 );
}