#include <bits/stdc++.h>
using namespace std;

int main() {
  int x,y,size; 
  int field[10][10];
  int dx[] = { 0,0,-1,1,-1,-1,1,1,0,0,-2,2};
  int dy[] = { -1,1,0,0,-1,1,-1,1,-2,2,0,0};
  for ( int i = 0; i < 10; i++ ) {
    for ( int j = 0; j < 10; j++ ) {
      field[i][j] = 0;
    }
  }

  while ( scanf("%d,%d,%d",&x,&y,&size) != EOF ) {
    field[y][x]++;   
    
    for ( int i = 0; i < size*4; i++ ) {
      int mx = x + dx[i];
      int my = y + dy[i];
      if ( mx >= 0 && mx < 10 && my >= 0 && my < 10 ) {
	field[my][mx]++;
      }
    }

  }
 
  int cnt = 0,maxv = 0;

  for ( int i = 0; i < 10; i++ ) {
    for ( int j = 0; j < 10; j++ ) {
      if ( field[i][j] == 0 ) cnt++;
      maxv = max(maxv,field[i][j]);
    }
  }

  cout << cnt << endl;
  cout << maxv << endl;
  
  return 0;
}