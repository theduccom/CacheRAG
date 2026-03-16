#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int w,h,sx,sy,gx,gy;
int mas[101][101],used[101][101];
int dx[] = {0,1,0,-1},dy[] = {1,0,-1,0};

void make_map(int x,int y,int chk,int color){
  if(chk == 0){
    for(int i=y;i<y+2;i++){
      for(int j=x;j<x+4;j++) mas[i][j] = color;
    }
  }
  else {
    for(int i=y;i<y+4;i++){
      for(int j=x;j<x+2;j++) mas[i][j] = color;
    }
  }
}

bool dfs(int x,int y){
  used[y][x] = true;
  if(x == gx && y == gy) return true;
  for(int i=0;i<4;i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx >= 0 && nx < w && ny >= 0 && ny < h && mas[ny][nx] == mas[sy][sx] && !used[ny][nx]) dfs(nx,ny);
  }
  return used[gy][gx];
}

int main(){
  int n;
  while(cin >> w >> h,w||h){
    fill_n(mas[0],101*101,0);
    memset(used,false,sizeof(used));
    cin >> sx >> sy >> gx >> gy >> n;
    --sx; --sy; --gx; --gy;
    while(n--){
      int c,d,x,y; cin >> c >> d >> x >> y; --x; --y;
      make_map(x,y,d,c);
    }
    cout << (dfs(sx,sy)? "OK" : "NG") << endl;
  }
}