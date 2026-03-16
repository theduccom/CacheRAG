#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,x,y,size,paper[10][10]={0},ans1=0,ans2=0;
    while(scanf("%d,%d,%d",&x,&y,&size)!=EOF)
    {
        if(x>=0&&x<10&&y>=0&&y<10)
        {
            paper[x][y]++;
            if(x!=0)
                paper[x-1][y]++;
            if(x!=9)
                paper[x+1][y]++;
            if(y!=0)
                paper[x][y-1]++;
            if(y!=9)
                paper[x][y+1]++;
            if(size>1)
            {
            if(x!=0&&y!=0)
                paper[x-1][y-1]++;
            if(x!=0&&y!=9)
                paper[x-1][y+1]++;
            if(x!=9&&y!=0)
                paper[x+1][y-1]++;
            if(x!=9&&y!=9)
                paper[x+1][y+1]++;
            }
            if(size>2)
            {
            if(x!=0&&x!=1)
                paper[x-2][y]++;
            if(x!=9&&x!=8)
                paper[x+2][y]++;
            if(y!=0&&y!=1)
                paper[x][y-2]++;
            if(y!=9&&y!=8)
                paper[x][y+2]++;
            }
        }
    }
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
        {
            if(paper[j][i]==0)
                ans1++;
            if(paper[j][i]>ans2)
                ans2=paper[j][i];
        }
    /*
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            printf("%d ",paper[j][i]);
        printf("\n");
    }
    */

    printf("%d\n%d\n",ans1,ans2);
    return 0;
}