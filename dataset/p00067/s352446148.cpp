#include <cstdio>
char m[22][22];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void solve(int x,int y){
  m[x][y] = '0';
  for(int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(0 <= nx && nx < 12 && 0 <= ny && ny < 12 && m[nx][ny] - '0'){
      solve(nx,ny);
    }
  }
}

int main(void)
{
  while(1){
    for(int i = 0; i < 12; i++){
      if(scanf("%s",m[i]) == EOF){
	return 0;
      }
    }

    int ret = 0;
    for(int i = 0; i < 12; i++){
      for(int j = 0; j < 12; j++){
	if(m[i][j] - '0'){
	  solve(i,j);
	  ret++;
	}
      }
    }
    printf("%d\n",ret);
  }
}