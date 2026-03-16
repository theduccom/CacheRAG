#include<bits/stdc++.h>
using namespace std;

int h,w;
int maps[100][100];
int color;
int gy,gx,sy,sx;
int dy[]={-1,0,1,0};
int dx[]={0,-1,0,1};
int muki[2][2]={
  {2,4},
  {4,2}
};
    
  

bool dfs(int y,int x);

int main(){
  int n;
  int c,d,y,x;
  while(cin >> w >> h,w | h){
    memset(maps,-1,sizeof(maps));
    cin >> sx >> sy >> gx >> gy;
    sx--;sy--;gx--;gy--;
    cin >> n;
    for(int i = 0; i < n; ++i){
      cin >> c >> d >> x >> y;
      y--;x--;
      for(int j = 0; j < muki[d][0]; j++){
	for(int k = 0;k < muki[d][1]; k++){
	  maps[y + j][x + k] = c;
	}
      }
    }
    for(int i=0;i<h;i++){
      for(int j = 0; j< w ; j++){
	if(i==sy && j == sx)color = maps[sy][sx];
      }
    }
    /*
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	printf("%3d",maps[i][j]);
      }
      cout<<endl;
    }*/

    if(dfs(sy,sx))cout << "OK" << endl;
    else cout << "NG" << endl;
    
    /*
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	printf("%3d",maps[i][j]);
      }
      cout<<endl;
      }*/

  }
}
 
bool dfs(int y,int x){
  maps[y][x] = -1;
  if(gy==y && gx==x){
    return true;
  }
  bool b = false;
  for(int i=0;i<4;i++){
    int vy=y+dy[i];
    int vx=x+dx[i];
    if(vy >= 0 && vy < h && vx >= 0 && vx < w && maps[vy][vx] != -1 && maps[vy][vx] == color){
      b = b | dfs(vy,vx);
    }
  }
  return b;
}
  