#include <stdio.h>
#define MAX(a,b) ((a>b)? a:b)

int data[10][10];

int drop(int x, int y){
  if(0 <= x && x < 10 && 0 <= y && y < 10) data[x][y]++;
}

int main(){
  int i,j;
  for(i=0;i<10;i++) for(j=0;j<10;j++) data[i][j] = 0;

  int x,y,r;
  while(scanf("%d,%d,%d", &x,&y,&r)!=EOF){
    switch(r){
    case 3:
      drop(x-2,y);drop(x+2,y);drop(x,y-2);drop(x,y+2);
    case 2:
      drop(x-1,y-1);drop(x+1,y-1);
      drop(x-1,y+1);drop(x+1,y+1);
    case 1:
      drop(x,y);drop(x-1,y);drop(x+1,y);drop(x,y-1);drop(x,y+1);
    }
  }

  int max=0;
  int num=0;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      if(data[i][j] == 0) num++;
      else max = MAX(max, data[i][j]);
    }
  }

  printf("%d\n%d\n", num, max);
}