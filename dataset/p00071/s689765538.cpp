#include<iostream>
#include<cstring>
using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
string grid[8];

void dfs(int x,int y){
  for(int i=0;i<4;i++){
    for(int j=1;j<4;j++){
      int nx,ny;
      nx=x+dx[i]*j;ny=y+dy[i]*j;
      if(0<=nx && nx<8 && 
	 0<=ny && ny<8 && 
	 grid[ny][nx]=='1'){
	grid[ny][nx]='0';
	dfs(nx,ny);
      }
    }
  }
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    
    for(int j=0;j<8;j++)
      cin>>grid[j];
    int x,y;
    cin>>x>>y;
    x--;y--;
    grid[y][x]='0';
    dfs(x,y);
    cout << "Data " << i+1 << ":" << endl;
    for(int j=0;j<8;j++)
      cout << grid[j] << endl;
  }
  return 0;
}