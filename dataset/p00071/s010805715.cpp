#include<cstdio>
char bom[10][10];
int dy[]={-1,-2,-3,0,0,0,1,2,3,0,0,0},dx[]={0,0,0,1,2,3,0,0,0,-1,-2,-3};
void dfs(int y,int x){
    if(y<0||x<0||y>8||x>8)return;
    if(bom[y][x]==0)return;
    if(bom[y][x]=='1'){
        bom[y][x]='0';
        for(int i=0;i<12;i++){
                dfs(y+dy[i],x+dx[i]);
        }
    }
}
int main(){
    int a,b,num;
    scanf("%d",&num);
        for(int kazu=0;kazu<num;kazu++){
        for(int i=0;i<8;i++){
                scanf("%s",bom[i]);
        }
        scanf("%d %d",&a,&b);
        dfs(b-1,a-1);
        printf("Data %d:\n",kazu+1);
        for(int i=0;i<8;i++){
                printf("%s\n",bom[i]);
        }
        }
}