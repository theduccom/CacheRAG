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

int main()
{
  int m = 110000;
  
  vector<int> p( m, 1 );

  for ( auto i = 2; i < m; ++i )
    {
      if ( p[i] )
        {
          for ( auto j = 2 * i; j < m; j += i )
            {
              p[j] = 0;
            }
        }
    }

  vector<int> pl;

  for ( auto i = 2; i < m; ++i )
    {
      if ( p[i] )
        pl.push_back( i );
    }

  int n;

  while( cin >> n && n != 0 )
    {
      int s = 0;
  
      for ( auto i = 0; i < n; ++i )
        s += pl[i];

      cout << s << endl;
      
    }
  
  return 0;
}