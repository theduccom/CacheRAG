#include <stdio.h>

int main(){
  while(1){
    int w,h;
    scanf("%d%d", &h, &w);

    if(w==0) break;

    char map[h][w];
    int done[h][w];

    int i,j;
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
       done[i][j] = 0;
       scanf(" %c", &map[i][j]);
       //printf("%c", map[i][j]);
      }
      //puts("");
    }

    int x,y;
    x = y = 0;
    
    while(map[x][y] != '.' && !done[x][y]){
      done[x][y] = 1;
      if(map[x][y] == '>') y++;
      else if(map[x][y] == 'v') x++;
      else if(map[x][y] == '^') x--;
      else if(map[x][y] == '<') y--;
    }

    if(done[x][y]) printf("LOOP\n");
    else printf("%d %d\n", y, x);
  }
  return 0;
}