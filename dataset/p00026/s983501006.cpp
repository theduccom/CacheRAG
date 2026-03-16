#include <stdio.h>
  int xy[15][15]={};
  int main(){
      int x,y,s,i,j,num=0;
      while(scanf("%d,%d,%d",&x,&y,&s) != EOF){
          if(s==1){
              xy[x][y]++;
              xy[x-1][y]++;
              xy[x+1][y]++;
              xy[x][y-1]++;
              xy[x][y+1]++;
          }else if(s==2){
              xy[x-1][y-1]++;
              xy[x-1][y]++;
              xy[x-1][y+1]++;
              xy[x][y-1]++;
              xy[x][y]++;
              xy[x][y+1]++;
              xy[x+1][y-1]++;
              xy[x+1][y]++;
              xy[x+1][y+1]++;
          }else if(s==3){
              xy[x-2][y]++;
              xy[x-1][y-1]++;
              xy[x-1][y]++;
              xy[x-1][y+1]++;
              xy[x][y-2]++;
              xy[x][y-1]++;
              xy[x][y]++;
              xy[x][y+1]++;
              xy[x][y+2]++;
              xy[x+1][y-1]++;
              xy[x+1][y]++;
              xy[x+1][y+1]++;
              xy[x+2][y]++;
          }
      }
      int max=xy[0][0];
      for(i=0;i<10;i++){
          for(j=0;j<10;j++){
              if(xy[i][j]==0) num++;
              if(xy[i][j]>max) max=xy[i][j];
          }
      }
      printf("%d\n%d\n",num,max);
      return 0;
  }