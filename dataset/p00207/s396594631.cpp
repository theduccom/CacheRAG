#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
bool used[101][101];
int mas[101][101],sx,sy,gx,gy,w,h;
int d[]={0,1,0,-1};
int dfs(int,int,int);
int main(){
  int n,c,d,x,y,tate,yoko;
  while(cin >> w >> h && w||h){
    memset(used,false,sizeof(used));
    memset(mas,-1,sizeof(mas));
    cin >> sy >> sx >> gy >> gx >> n;
    sy--,sx--,gx--,gy--;
    while(n--){
      cin >> c >> d >> y >> x;
      x--,y--;
      d==0 ? (tate=2,yoko=4) : (tate=4,yoko=2);
      for(int i=x;i<x+tate;i++){
	for(int j=y;j<y+yoko;j++){
	  mas[i][j] = c;
	}
      }
    }
    dfs(sx,sy,mas[sx][sy]);
    cout << (used[gx][gy]?"OK":"NG") << endl;
  }
}
int dfs(int x,int y,int color){
  used[x][y] = true;
  for(int i=0;i<4;i++){
    int nx=x+d[i],ny=y+d[3-i];
    if(x>=0&&x<h&&y>=0&&y<w&&mas[nx][ny]==color&&used[nx][ny]==false){
	dfs(nx,ny,color);
      }
  }
}