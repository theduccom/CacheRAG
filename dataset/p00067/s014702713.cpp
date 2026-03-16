#include <iostream>

using namespace std;

char data[12][12];
bool visited[12][12];
int dx[]={0, 1, 0, -1};
int dy[]={-1, 0, 1, 0};

void dfs(int, int);

main(){
  while(1){
    bool end=false;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
	if(scanf("%c", &data[i][j])==EOF){
	  end=true;
	  return 0;
	}
      }
      getchar();
    }
    getchar();
    int ans=0;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
	visited[i][j]=false;
      }
    }
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
	if(data[i][j]=='1' && !visited[i][j]){
	  ans++;
	  dfs(i, j);
	}
      }
    }
    cout << ans << endl;
  }
  return 0;
}

void dfs(int y, int x){
  visited[y][x]=true;
  for(int i=0;i<4;i++){
    int ty=y+dy[i];
    int tx=x+dx[i];
    if(ty>=0 && ty<12){
      if(tx>=0 && tx<12){
	if(data[ty][tx]=='1' && !visited[ty][tx]){
	  dfs(ty, tx);
	}
      }
    }
  }
}