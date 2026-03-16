#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
#define loop(i,a,b) for(int i = a ; i < b ; i++)
#define rep(i,a) for(int i = 0 ; i < a ; i++) 

bool maze[12][12];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
bool inmaze(int x,int y){
  return (0<=x && x<12) && (0<=y && y<12);
}

void dfs(int x,int y){
  if(!inmaze(x,y))return;
  maze[x][y] = false;
  rep(i,4)
    if(maze[x+dx[i]][y+dy[i]])
      dfs(x+dx[i],y+dy[i]);
}
int main(void){
  string s;
  while(cin>>s){
    rep(i,12)maze[0][i] = s[i] - '0';

    loop(i,1,12){
      cin>>s;
      rep(j,12)maze[i][j] = s[j] - '0';
    }
    int cnt = 0;
    rep(i,12)rep(j,12)
      if(maze[i][j]){
	cnt++;
	dfs(i,j);
      }
    cout<<cnt<<endl;
    //rep(i,12)rep(j,12)cout<<(j?' ':'\n')<<maze[i][j];
  }
}