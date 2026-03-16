#include<cstdio>
void func (int x,int y);
char fd[13][13];
int main()
{
    int ans;
    for(int i=0;i<13;i++){
        fd[13][i]='0';
    }
    while(scanf("%s",&fd[0])!=EOF){
        ans=0;
        for(int i=1;i<12;i++){
            scanf("%s",&fd[i]);
        }
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                if(fd[i][j]=='1'){
                    func(i,j);
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
void func (int x,int y)
{
    if(fd[x][y]=='0'||fd[x][y]=='\0')return ;
    else {
        fd[x][y]='0';
        func(x+1,y);
        func(x,y+1);
        if(y-1>=0) func(x,y-1);
    }
}