#include<iostream>
#include<cstdio>
using namespace std;

void dfs(int x,int y);
int dx[12]={0,0,0, 0, 0, 0,1,2,3,-1,-2,-3};
int dy[12]={1,2,3,-1,-2,-3,0,0,0, 0, 0, 0};
char maps[8][8];

int main(){
  int n,sx,sy;
  cin >> n;
  for(int cas=1;cas<=n;cas++){
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
	cin >> maps[i][j];
      }
    }
    cin >> sx >> sy;
    dfs(sx-1,sy-1);
    cout << "Data " << cas<< ":" << endl;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
	cout << maps[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}

void dfs(int x,int y){
  int nx,ny;
  for(int i=0;i<12;i++){
    nx=x+dx[i];
    ny=y+dy[i];
    maps[y][x]='0';
    if(0<=nx && nx<8 && 0<=ny && ny<8 && maps[ny][nx]=='1'){
      dfs(nx,ny);
    }
  }
}