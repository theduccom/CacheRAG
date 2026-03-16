#include<cstdio>
char isl[20][20];
int dy[]={-1,0,1,0},dx[]={0,1,0,-1};
void dfs(int y,int x){
    if(y<0||x<0||y>=12||x>=12)return;
    if(isl[y][x]=='1'){
        isl[y][x]='0';
        for(int i=0;i<4;i++)dfs(y+dy[i],x+dx[i]);
    }
}
int main(){
    while(scanf("%s",isl[0])!=EOF){
        for(int i=1;i<12;i++)scanf("%s",isl[i]);
        int cou=0;

        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                if(isl[i][j]=='1'){
                    cou++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",cou);
    }
}