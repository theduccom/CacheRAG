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
  int maxw;
  int x = 0;
  
  while ( cin >> maxw && maxw != 0 )
    {
      int n;
      cin >> n;

      char c;
      vector<int> v(n, 0);
      vector<int> w(n, 0);
      vector<vector<int>> dp(n+1, vector<int>(maxw+1, 0));

      for ( auto i = 0; i < n; ++i )
        {
          cin >> v[i];
          cin >> c;
          cin >> w[i];
        }

      for ( auto i = 0; i < n; ++i )
        for ( auto j = 0; j <= maxw; ++j )
          if ( w[i] <= j )
            dp[i+1][j] = max( dp[i][j], dp[i][j-w[i]] + v[i]);
          else
            dp[i+1][j] = dp[i][j];

      int mw = maxw;
      while ( dp[n][mw] == dp[n][maxw] ) --mw;
        
      cout << "Case " << ++x << ":" << endl;
      cout << dp[n][maxw] << endl;
      cout << mw + 1 << endl;
    }
  
  return 0;
}