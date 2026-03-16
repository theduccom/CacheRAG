#include <stdio.h>
 
int main() {
 
  char map[101][101],a[102];
  int i,j,w,h,x,y,flag;
 
  while(1) {
    scanf("%d %d",&h,&w);
    if(w==0 && h ==0) break;
 
    for(i=0;i<h;i++) {
      scanf("%s",a);
      for(j=0;j<w;j++) {
    map[i][j] = a[j];
      }
 
    }
 
    flag = 0;
    x  = y = 0;
 
    while(1) {
      flag++;
      if(map[y][x] == '^')y--;
      else if(map[y][x] == '>')x++;
      else if(map[y][x] == 'v')y++;
      else if(map[y][x] == '<')x--;
      else if(map[y][x] == '.'){
    //  printf("break\n");
    break;
      }
       
      // printf("flag = %d\n",flag);
      if(flag >=25000) break;
    }
 
 
    if(flag >= 24000) printf("LOOP\n");
    else printf("%d %d\n",x,y);
 
  }
 
  return 0;
 }