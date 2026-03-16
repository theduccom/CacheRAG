#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
int field[1000][1000];
int W, H;
int tmp;

void dfs(int x, int y){
  field[y][x] = -1;
  for(int i = 0 ; i < 4 ; i++){
    if(x+dx[i]<0 || W <= x+dx[i] || y+dy[i] < 0 || H <= y+dy[i]) continue;
    if(field[y+dy[i]][x+dx[i]] != tmp) continue;
    dfs(x+dx[i], y+dy[i]);
  }
}
    
int main(){
  int sx, sy, gx, gy, n;
  int c, d, x, y;

  while(cin >> W >> H){
    if(W == 0 && H == 0) break;
    memset(field, 0, sizeof(field));
    cin >> sx >> sy >> gx >> gy >> n;
    sx--, sy--, gx--, gy--;
    for(int i = 0 ; i < n ; i++){
      cin >> c >> d >> x >> y;
      x--, y--;
      
      if(d == 1){
	for(int i = y ; i < y+4 ; i++){
	  for(int j = x ; j < x+2 ; j++){
	    field[i][j] = c;
	  }
	}
      }
      else{
	for(int i = y ; i < y+2 ; i++){
	  for(int j = x ; j < x+4 ; j++){
	    field[i][j] = c;
	  }
	}
      }
    }
    if(field[sy][sx] == 0){
      cout << "NG" << endl;
      continue;
    }
    
    tmp = field[sy][sx];
    dfs(sx, sy);
    
    if(field[gy][gx] == -1) cout << "OK" << endl;
    else cout << "NG" << endl;
  }
  return 0;
}
      