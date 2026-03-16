#include<iostream>
#include<cstdio>

using namespace std;
#define MAX_M 100
#define MAX_N 100

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int N,M;
char field[MAX_N][MAX_M+1];

void dfs(int x,int y){
  field[x][y] = '0' ;

  for(int i = 0 ; i < 4 ; i ++){
    for(int j = 0 ; j < 4 ; j ++){
      int nx = x + dx[i] ; int ny = y + dy[i];
      if(0<=nx && nx < N &&
	 0<=ny && ny < M &&
	 field[nx][ny]=='1')
	dfs(nx,ny);
    }
  }
  return ;  
}

void solve(){
  int res = 0;
  for(int i = 0 ; i < N ; i ++){
    for(int j = 0 ; j < M ; j ++){
      if(field[i][j] == '1'){
	dfs(i,j);
	res ++;
      }
    }
  }
  printf("%d\n",res);
}

int main(void){
  N = 12 ; M = 12;
  while(cin>>field[0][0]){
    for(int i = 1 ; i < M ; i ++)
      cin>>field[0][i];
    for(int i = 1 ; i < N ; i ++){
      for(int j = 0 ; j < M ; j ++){
	cin>>field[i][j];
      }
    }
    solve();
  }
}