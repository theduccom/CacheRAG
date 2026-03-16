#include <iostream>
using namespace std;

int map[101][101];
int w,h; 
int color;
int xg,yg;

bool dfs(int y,int x) {
  if ( map[y][x] != color ) return 0;
  map[y][x] = 10;
  bool f=0;
  if ( y-1 >= 1 ) f|=dfs( y-1 , x );
  
  if ( y+1 <= h ) f|=dfs( y+1 , x );
  if ( x-1 >= 1 ) f|=dfs( y , x-1 );
  if ( x+1 <= w ) f|=dfs( y , x+1 );
  
  if ( y==yg && x==xg ) return 1; 
  return f;

}

int main() {
  while ( cin >> w >> h ,w+h ) {
    for(int i=1; i<=h; i++) {
      for(int j=1; j<=w; j++) map[i][j]=0;
    }
    int xs,ys; cin >> xs >> ys;
    cin >> xg >> yg;
    int n; cin >> n;
    while ( n > 0 ) {
      n--;
      int c,d,x,y;
      cin >> c >> d >> x >> y;
      if ( d == 1 ) {

	for ( int i = y; i < y+4; i++ ) {
	  for ( int j = x; j < x+2; j++ ) map[i][j] = c;
	}
      
      } else if ( d == 0 ) {
	for ( int i = y; i < y+2; i++ ) {
	  for ( int j = x; j < x+4; j++ ) map[i][j] = c;
	}
      }
      
    }
    color = map[ys][xs];
    if ( dfs(ys,xs) ) cout << "OK" << endl;
    else cout << "NG" << endl;
    
  }

  return 0;
}