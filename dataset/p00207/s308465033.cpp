#include<iostream>
using namespace std;

int w,h;
int sx,sy,gx,gy;
int n,c,d,x,y;
int g[200][200];
bool use[200][200];
int dy[] = {-1,0,1,0}, dx[] = {0,1,0,-1};

void rec(int Y,int X, char c){
  if(use[Y][X])return;
  use[Y][X] = true;

  for(int i=0;i<4;i++){
    int ny = Y+dy[i], nx = X+dx[i];
    if(ny<1 || nx<1 || ny>h || nx>w)continue;
    if(g[ny][nx] == c)rec(ny,nx,c);
  }
}

int main(){
  while(cin >> w >> h,w||h){
    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
	g[i][j] = 0;
	use[i][j] = false;
      }
    }

    cin >> sx >> sy >> gx >> gy >> n;
    for(int i=0;i<n;i++){
      cin >> c >> d >> x >> y;
      if(d==0){
	for(int j=0;j<2;j++){
	  for(int k=0;k<4;k++){
	    g[y+j][x+k] = c;
	  }
	}
      }else{
	for(int j=0;j<4;j++){
	  for(int k=0;k<2;k++){
	    g[y+j][x+k] = c;
	  }
	}
      }
    }

    if(!g[sy][sx] || !g[gy][gx] || g[sy][sx] != g[gy][gx]){
      cout << "NG\n";
    }else{
      rec(sy,sx,g[sy][sx]);
      cout << (use[gy][gx]?"OK":"NG") << endl;
    }
  }
}