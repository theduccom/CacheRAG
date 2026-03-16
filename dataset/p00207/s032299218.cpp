#include<iostream>
#include<queue>
#define MAX 100
using namespace std;

int map[MAX+2][MAX+2];
bool check[MAX+2][MAX+2];
int dx[4] = { -1,1,0,0};
int dy[4] = { 0,0,-1,1};

int main () {

  while ( true ) {

    queue<int> next;

    while( !next.empty() ) {
      next.pop();
    }
    
    int w,h;
    cin >> w >> h ;

    if ( w == 0 )
      break;

    int xs,ys;
    cin >> xs >> ys;
    
    int xg, yg;
    cin >> xg >> yg;

    int n;
    cin >> n;

    int c,d,x,y;

    for ( int i=0; i<MAX+2; i++ ) {
      for ( int j=0; j<MAX+2; j++ ) {
	map[i][j] = 0;
	check[i][j] = true;
      }
    }

    for ( int i=0; i<n; i++ ) {
      cin >> c >> d >> x >> y;
      
      //int count = 0;
      for ( int j=0; j<2; j++ ) {
	for ( int k=0; k<4; k++ ) {
	  //cout << count;
	  if ( d == 0 ) {
	    map[y+j][x+k] = c;
	  } else {
	    map[y+k][x+j] = c;
	  }
	}
      }
      //cout << endl;
    }

    next.push(ys*1000 + xs );

    int point;
    bool goal = false;

    int sc = map[ys][xs];

    /*
      for ( int i=0; i<=h; i++ ) {
      for ( int j=0; j<=w; j++ ) {
      cout << map[i+1][j+1];
      }
      cout << endl;
      }
      cout << endl;
    */
    int xn,yn;
    if ( map[yg][xg] == sc ) {
      if ( sc == 0 || map[yg][xg] == 0 ) {
      }
      else {
	while ( !next.empty() ) {
	  point = next.front();
	  next.pop();
	  xn = point%1000;
	  yn = point/1000;

	  if (map[yn][xn] == 0 )
	    continue;

	  if (point == yg*1000+xg) {
	    goal = true;
	    break;
	  }

	  for ( int i=0; i<4; i++ ) {
	    if ( check[yn+dy[i]][xn+dx[i]] ) {
	      check[yn+dy[i]][xn+dx[i]] = false;
	      if ( map[yn+dy[i]][xn+dx[i]] == sc ) {
		next.push((yn+dy[i])*1000+ xn +dx[i]);
	      }
	    }
	  }
	}
      }
    }

    if ( goal )
      cout << "OK\n";
    else
      cout << "NG\n";
  }
}
    
      
      