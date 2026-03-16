#include <stdio.h>

#define MAX 20
#define TEST 0
int dist[MAX][MAX];

void fw(int n)
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((dist[i][k]!=-1 && dist[k][j]!=-1)&& (dist[i][j]==-1|| (dist[i][k]!=-1 && dist[i][j]>dist[i][k]+dist[k][j])))
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    return;
}


int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dist[i][j]=-1;
        }
    }
    for(int i=0;i<m;i++)
    {
        int a,b,c,d;
        scanf("%d,%d,%d,%d",&a,&b,&c,&d);
        dist[a-1][b-1]=c;
        dist[b-1][a-1]=d;
    }
    int x1,x2,y1,y2;
    scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
    fw(n);
    if(TEST)
    {
        printf("(x1,x2,y1,y2)=(%d,%d,%d,%d)\n",x1,x2,y1,y2);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",dist[i][j]);
            }
            puts("");
        }
    }
    printf("%d\n",y1-y2-dist[x1-1][x2-1]-dist[x2-1][x1-1]);
    return 0;
}