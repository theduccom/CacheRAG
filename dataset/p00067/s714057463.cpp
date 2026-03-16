#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
#define MAX 1000000
bool prime[MAX];

char maze[13][13];

void dfs(int y,int x){
  int dx[] = {-1,1,0,0};
  int dy[] = {0,0,-1,1};
  maze[y][x] = '0';
  for(int i = 0 ; i < 4 ; i ++){
    if(maze[y+dy[i]][x+dx[i]]=='1')dfs(y+dy[i],x+dx[i]);
  }
}
int main(void){ 
  while(cin>>maze[0][0]){
    //cout<<maze[0][0];
    for(int i = 1 ; i < 12  ; i ++){
      cin>>maze[0][i];
      //cout<<maze[0][i];
    }
    //cout<<endl;
    for(int i = 1 ; i < 12 ; i ++){
      for(int j = 0 ; j < 12 ; j ++){
	cin>>maze[i][j];
	//cout<<maze[i][j];
      }
      //cout<<endl;
    }

    int cnt = 0;
    for(int i = 0 ; i <= 12 ; i ++){
      for(int j = 0 ; j <= 12 ; j ++){
	if(maze[i][j] == '1'){
	  cnt++;
	  dfs(i,j);
	}
      }
    }
    cout<<cnt<<endl;
  }
  
}