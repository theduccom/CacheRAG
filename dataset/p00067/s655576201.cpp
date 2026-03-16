#include<iostream>
#include<cstdio>
using namespace std;

void bfs(int x,int y);
int tmap[12][12]={0};
char input[13][13];
int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};
int cou;

int main(){
  while(scanf("%s",input[0]) != EOF){
    for(int i=1;i<12;i++){
      scanf("%s",input[i]);
    }
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
	if(input[i][j] == '1'){
	  tmap[i][j] = 1;
	}
	else {
	  tmap[i][j] = 0;
	}
      }
    }
    cou = 0;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
	if(tmap[i][j] == 1){
	  bfs(j,i);
	  cou++;
	}
      }
    }
    cout << cou << endl;
  }
}
	
void bfs(int x,int y){
  tmap[y][x] = 0;
  for(int i=0;i<4;i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx >= 0 && nx < 12 && ny >= 0 && ny < 12 && tmap[ny][nx] == 1){
      bfs(nx,ny);
    }
  }
  return;
}