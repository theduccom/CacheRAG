#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back 
#define pf push_front 
#define mp make_pair
#define fr first
#define sc second
#define Rep(i,n) for(int i=0;i<(n);i++)
#define All(v) v.begin(),v.end()
typedef pair<int, int> Pii; typedef pair<int, Pii> Pip;
const int INF = 1107110711071107;

int ok( int x, int y )
{
  if( 0 <= x && 0 <= y && x <= 10 && y <= 10 ) return 1;
  else return 0;
}

main()
{
  int x, y, s;
  int data[11][11] = {{0}};
  while( scanf("%lld,%lld,%lld", &x, &y, &s) != EOF ) {
    //cout << x << " " << y << " " << s << endl;
    if( s == 1 ) {
      if( ok(x, y) )   data[y][x]++;
      if( ok(x, y-1) ) data[y-1][x]++;
      if( ok(x+1, y) ) data[y][x+1]++;
      if( ok(x, y+1) ) data[y+1][x]++;
      if( ok(x-1, y) ) data[y][x-1]++;
    }

    if( s == 2 ) {
      if( ok(x, y) )     data[y][x]++;
      if( ok(x, y-1) )   data[y-1][x]++;
      if( ok(x+1, y-1) ) data[y-1][x+1]++;
      if( ok(x+1, y) )   data[y][x+1]++;
      if( ok(x+1, y+1) ) data[y+1][x+1]++;
      if( ok(x, y+1) )   data[y+1][x]++;
      if( ok(x-1, y+1) ) data[y+1][x-1]++;
      if( ok(x-1, y) )   data[y][x-1]++;
      if( ok(x-1, y-1) ) data[y-1][x-1]++;
    }

    if( s == 3 ) {
      if( ok(x, y) )     data[y][x]++;
      if( ok(x, y-1) )   data[y-1][x]++;
      if( ok(x+1, y-1) ) data[y-1][x+1]++;
      if( ok(x+1, y) )   data[y][x+1]++;
      if( ok(x+1, y+1) ) data[y+1][x+1]++;
      if( ok(x, y+1) )   data[y+1][x]++;
      if( ok(x-1, y+1) ) data[y+1][x-1]++;
      if( ok(x-1, y) )   data[y][x-1]++;
      if( ok(x-1, y-1) ) data[y-1][x-1]++;
      
      if( ok(x, y-2) )     data[y-2][x]++;
      if( ok(x+2, y) )     data[y][x+2]++;
      if( ok(x, y+2) )     data[y+2][x]++;
      if( ok(x-2, y) )     data[y][x-2]++;
    }
    
  }

  int cnt = 0;
  int ma = 0;
  Rep(i, 10) Rep(j, 10) {
    if( !data[i][j] ) cnt++;
    ma = max(ma, data[i][j]);
  }

  cout << cnt << endl << ma << endl;
  
}