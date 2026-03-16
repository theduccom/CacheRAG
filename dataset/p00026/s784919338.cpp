#include<iostream>
#include<iomanip>
#include<memory>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
  int dx[13] = {0, 1, 0, -1, 0, 1, -1, -1, 1, 2, 0, -2, 0};
  int dy[13] = {0, 0, 1, 0, -1, 1, 1, -1, -1, 0, 2, 0, -2};
  int loop[4] = {0, 5, 9, 13};

  int map[10][10];
  int x, y, size;
  char c;
  int cnt = 0, d = 0;
  
  for ( int i = 0; i < 10; ++i )
    for ( int j = 0; j < 10; ++j )
      map[i][j] = 0;

  while( cin >> x >> c >> y >> c >> size )
    {
      for ( int i = 0; i < loop[size]; ++i )
        if ( x+dx[i] >= 0 && x+dx[i] < 10 && y+dy[i] >= 0 && y+dy[i] < 10 )
          map[x+dx[i]][y+dy[i]] += 1;
    }

  for ( int i = 0; i < 10; ++i )
    for ( int j = 0; j < 10; ++j )
      {
        if ( map[i][j] == 0 )
          ++cnt;
        d = max( d, map[i][j] );
      }

  cout << cnt << endl;
  cout << d << endl;
  
  return 0;
}