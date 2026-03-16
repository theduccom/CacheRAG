#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int w,h,xg,yg,n,ans = 0;
int mas[110][110];
int dx[4] = {0,-1,0,1};
int dy[4] = {1,0,-1,0};
void block(int x, int y, int m);
int main(){
  int c,d,x,y,xs,ys;
  while(1){
    memset(mas,0,sizeof(mas));
    ans = 0;
    scanf("%d %d",&w,&h);
    if(w == 0 && h == 0)break;
    scanf("%d %d",&xs,&ys);
    scanf("%d %d",&xg,&yg);
    scanf("%d",&n);
    for(int u = 0; u < n; u++){
      cin >> c >> d >> x >> y;
      if(d == 0){
	for(int i = y; i < y + 2; i++){
	  for(int j = x; j < x + 4; j++){
	    mas[i][j] = c;
	  }
	}
      }
      else {
	for(int i = y; i < y + 4; i++){
	  for(int j = x; j < x + 2; j++){
	    mas[i][j] = c;
	  }
	}
      }
    }
    if(mas[ys][xs] != 0){
      block(xs,ys,mas[ys][xs]);
    }
    if(ans == 1)cout << "OK" << endl;
    else cout << "NG" << endl;
  }
}

void block(int x, int y, int m){
  if(x == xg && y == yg){
    ans = 1;
    return ;
  }
  mas[y][x] = 0;
  for(int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(mas[ny][nx] == m && nx <= w && nx > 0 && ny <= h && ny > 0 && mas[ny][nx] != 0){
      block(nx,ny,mas[ny][nx]);
    }
  }
}