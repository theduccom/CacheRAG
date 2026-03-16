#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<queue>

using namespace std;
typedef pair<int, int> P;

int dx[4] ={0, 1, 0, -1}; int dy[4] = {1,0,-1,0};
int i, j,k,base,island=0,X,Y;
int  map[20][20] = {};
int flag[20][20] = {};

int bfs(int x, int y){
  queue<P> que;
  que.push(P(x,y));
  flag[y][x] = 1;
  
  while(que.size()){
    P p=que.front();
    que.pop();
    
    for(k=0;k<4;k++){
      int nx = p.first+dx[k], ny = p.second+dy[k];
      if(flag[ny][nx] == 0 && nx>=0 && 11>=nx && ny>=0 && ny<=11){
	flag[ny][nx] = 1;
	if(map[ny][nx] == 1){
	  que.push(P(nx,ny));
	}
      }
    }
  }
  return 0;
}
  
  
int main(){
  while(~scanf("%1d", &map[0][0])) {
    j = 1;
    for(i = 0; i < 12; i++, j=0)
      for(;j < 12; j++) {
	scanf("%1d", &map[i][j]);
      }
    for(i=0;i<12;i++){
      for(j=0;j<12;j++){
	flag[i][j]=0;
      }
    }
  island=0;
  for(Y=0; Y<12;Y++){
    for(X=0; X<12;X++){
      if(flag[Y][X] == 0 && map[Y][X] == 1){
	bfs(X,Y);
	  island++;
      }
    }
  }
  cout <<island << endl;
  }
  return 0;
  
}

    