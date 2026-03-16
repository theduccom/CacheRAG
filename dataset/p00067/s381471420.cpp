#include <stdio.h>
char c[12][12];
bool f[12][12];
void dfs(int x,int y){
    if(x<0||y<0||x>=12||y>=12)return ;
    if(c[x][y]!='1')return ;
    if(!f[x][y])return ;
    f[x][y]=false;
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x,y-1);
    return ;
}
int main(){
    int ans;
    while(scanf("%s",c[0])!=EOF){
        for(int i=0;i<12;i++)for(int j=0;j<12;j++)f[i][j]=true;
        ans=0;
        for(int i=1;i<12;i++)scanf("%s",c[i]);
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                if(c[i][j]=='1'&&f[i][j]){
                    ans++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",ans);
    }
}