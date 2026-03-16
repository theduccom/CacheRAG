#include <stdio.h>
char map[8][8];
void boom(int x,int y){
    if(x>7||y>7||x<0||y<0)return;
    if(map[x][y]=='0')return;
    map[x][y]='0';
    for(int i=1;i<=3;i++){
        boom(x+i,y);
        boom(x-i,y);
        boom(x,y+i);
        boom(x,y-i);
    }
    return;
}
int main(){
    int t,x,y;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        for(int i=0;i<8;i++)scanf("%s",map[i]);
        scanf("%d%d",&x,&y);
        printf("Data %d:\n",j);
        boom(y-1,x-1);
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++)printf("%c",map[i][j]);
            printf("\n");
        }
    }
}