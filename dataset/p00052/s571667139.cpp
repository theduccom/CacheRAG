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
  int n;
  
  while( cin >> n && n != 0 )
    {
      int k = 0;

      for ( auto i = 1; i <= n; ++i )
        {
          int j = i;
          
          while( j % 5 == 0 )
            {
              ++k;
              j /= 5;
            }
        }
      cout << k << endl;
    }
  
  return 0;
}