#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>

using namespace std;


int roma( char c )
{
  if ( c == 'I' )
    return 1;
  else if ( c == 'V' )
    return 5;
  else if ( c == 'X' )
    return 10;
  else if ( c == 'L' )
    return 50;
  else if ( c == 'C' )
    return 100;
  else if ( c == 'D' )
    return 500;
  else
    return 1000;
}

int main()
{
  string s;

  
  while ( cin >> s )
    {
      int n = 0;
      
      for ( auto i = 0; i < s.size(); ++i )
        {
          if ( i )
            {
              if ( roma( s[i] ) > roma( s[i-1] ) )
                n += roma( s[i] ) - 2 * roma( s[i-1] );
              else
                n += roma( s[i] );
            }
          else
            {
              n += roma( s[i] );
            }
        }
      cout << n << endl;
    }
  
  return 0;
}