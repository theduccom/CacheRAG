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
  int a, b;
  int c = 0;
  
  while ( cin >> a >> b )
    {
      if ( a == 0 && b == 0 ) break;
      
      vector<int> ret;

      for ( auto y = a; y <= b; ++y )
        {
          if ( y % 400 == 0 || ( y % 100 != 0 && y % 4 == 0 ) )
            ret.push_back( y );
        }

      if ( c++ ) cout << endl;

      if ( ret.size() == 0 )
        cout << "NA" << endl;
      else
        for ( auto it = ret.begin(); it != ret.end(); ++it )
          cout << *it << endl;
    }
  
  return 0;
}