#include<stdio.h>
int bomb(int y,int x);
char maps[8][8];
int dy[12]={-1,-2,-3,0,0,0,1,2,3,0,0,0};
int dx[12]={0,0,0,1,2,3,0,0,0,-1,-2,-3};
int main(){
  int n;
  int y,x;
  int i,j,l;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=0;j<8;j++){
      for(l=0;l<8;l++){
	scanf(" %c",&maps[j][l]);
      }
    }
    scanf("%d %d",&x,&y);
    x--;
    y--;
    bomb(y,x);
    printf("Data %d:\n",i);
    for(j=0;j<8;j++){
      for(l=0;l<8;l++){
	printf("%c",maps[j][l]);
      }
      printf("\n");
    }
  }
  return 0;
}

int bomb(int y,int x){
  maps[y][x]='0';
  int rec=0,ny,nx;
  int i;
  for(i=0;i<12;i++){
    ny=y+dy[i];
    nx=x+dx[i];
    if(ny>=0&&ny<8&&nx>=0&&nx<8&&maps[ny][nx]!='0'){
      rec+=bomb(ny,nx);
    }
  }
  return rec;
}