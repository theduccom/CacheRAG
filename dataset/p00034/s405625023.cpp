#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>
#include<array>

using namespace std;

int main()
{
  array<double, 10> l;
  double v1, v2;
  char c;

  while ( cin >> l[0] )
    {
      double al = l[0];

      for ( auto i = 1; i < 10; ++i )
        {
          cin >> c >> l[i];
          al += l[i];
        }
  
      cin >> c >> v1 >> c >> v2;

      double p = al * v1 / (v1 + v2);

      double cl = 0;

      for ( auto i = 0; i < 10; ++i )
        {
          cl += l[i];
          if ( cl >= p )
            {
              cout << i + 1 << endl;
              break;
            }
        }
    }
  
  return 0;
}