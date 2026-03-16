/* competitive programming circle traP */
/* template */
#include <stdio.h>

int mp[8][8];

void bomb(int y,int x){
  mp[y][x] = 0;
  for(int d=-3;d<=3;d++){
    if(d==0)continue;
    // y + d
    if(0<=y+d && y+d<8){
      if(mp[y+d][x]==1)bomb(y+d,x);
    }
    // x + d
    if(0<=x+d && x+d<8){
      if(mp[y][x+d]==1)bomb(y,x+d);
    }
  }
}

int main(){
  int t;
  scanf("%d",&t);
  for(int no=0;no<t;no++){
    // input
    for(int i=0;i<8;i++){
      char s[10];
      scanf("%s",&s);
      for(int j=0;j<8;j++){
        mp[i][j] = (s[j]-'0');
      }
    }
    int x,y;
    scanf("%d%d",&x,&y);
    // calc(dfs)
    bomb(y-1,x-1);
    // output
    printf("Data %d:\n",no+1);
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++)printf("%d",mp[i][j]);
      printf("\n");
    }
  }
  return 0;
}