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
  array<int, 50030> pn{};

  for ( auto i = 2; i < pn.size(); ++i )
    {
      if ( pn[i] == 0 )
        {
          for ( auto j = 2 * i; j < pn.size(); j += i )
            {
              pn[j] = 1;
            }
        }
    }

  int n;

  while ( cin >> n )
    {
      int i;
      for ( i = 1; pn[n - i] == 1; ++i );
      cout << n - i << " ";
      for ( i = 1; pn[n + i] == 1; ++i );
      cout << n + i << endl;
    }
  
  return 0;
}