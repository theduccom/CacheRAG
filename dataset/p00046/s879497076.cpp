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
  double h, mx, mn;

  cin >> h;
  mx = h;
  mn = h;

  while ( cin >> h )
    {
      mx = max( mx, h );
      mn = min( mn, h );
    }

  cout << mx - mn << endl;
  
  return 0;
}