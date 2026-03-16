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
  int w;
  
  while ( cin >> w )
    {
      bool flag = false;
      
      for ( auto i = 0; i < 10; ++i )
        {
          if ( (w >> i) & 1 )
            {
              if ( flag ) cout << " ";
              flag = true;
              cout << (1 << i);
            }
        }
      cout << endl;
    }
  return 0;
}