#include <cstdio>
using namespace std;

int main(){
  int p[14][14]={0};
  int x,y,s;
  while(scanf("%d,%d,%d",&x,&y,&s)>0){
    if(s==1){
      p[x+2][y+1]++;p[x+1][y+2]++;p[x+2][y+2]++;p[x+3][y+2]++;p[x+2][y+3]++;
    }
    else if(s==2){
      for(int i=1;i<4;i++){
	for(int j=1;j<4;j++) p[x+i][y+j]++;
      }
    }
    else{
      for(int i=1;i<4;i++){
	for(int j=1;j<4;j++) p[x+i][y+j]++;
      }
      p[x][y+2]++;p[x+2][y]++;p[x+4][y+2]++;p[x+2][y+4]++;
    }
  }
  int w=0;
  int t=0;
  for(int i=2;i<12;i++){
    for(int j=2;j<12;j++){
      if(p[i][j]==0) w++;
      if(p[i][j]>t) t=p[i][j];
    }
  }
  printf("%d\n%d\n",w,t);
  return 0;
}