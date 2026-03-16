#include <bits/stdc++.h>

using namespace std;

int vy[] = {1, 0, -1, 0};
int vx[] = {0, 1, 0, -1};
bool field[12][12], chk[12][12];

void dfs(int y, int x){
  chk[y][x] = true;
  for(int i = 0; i < 4; ++i){
    int ny = y + vy[i];
    int nx = x + vx[i];
    if(ny >= 0 && ny < 12 && nx >= 0 && nx < 12 && field[ny][nx] && !chk[ny][nx]) dfs(ny, nx);
  }
}

int main(){

  int cnt;
  char bit;

  while(1){

    cnt = 0;
    
    for(int i = 0; i < 12; ++i){
      for(int j = 0; j < 12; ++j){
	cin >> bit;
	field[i][j] = (bit - '0') ? 1 : 0;
      }
    }
    
    if(cin.eof()) break;

    for(int i = 0; i < 12; ++i){
      for(int j = 0; j < 12; ++j){
	chk[i][j] = false;
      }
    }
    
    for(int i = 0; i < 12; ++i){
      for(int j = 0; j < 12; ++j){
	if(field[i][j] && !chk[i][j]){
	  dfs(i, j);
	  ++cnt;
	}
      }
    }
    
    cout << cnt << endl;

  }
  
}