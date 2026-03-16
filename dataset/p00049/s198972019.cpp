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
  int n;
  char c;
  string s;
  array<int, 4> cnt{};

  while ( cin >> n >> c >> s )
    {
      if ( s == "A" )
        ++cnt[0];
      else if ( s == "B" )
        ++cnt[1];
      else if ( s == "AB" )
        ++cnt[2];
      else
        ++cnt[3];
    }

  for ( auto i = 0; i < 4; ++i )
    cout << cnt[i] << endl;
  
  return 0;
}