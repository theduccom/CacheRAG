#include <stdio.h>
int xg,yg,c,sc,ans,block[101][101],w,h;
int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
int idou(int x,int y)
{
    if(x == xg&&y == yg)
    {
        ans = 1;
        return 0;
    }
    if(sc == 0)return 0;
    block[x][y] = 0;
    for(int i = 0; i < 4; i++)
    {
        if(block[x + dx[i]][y + dy[i]] == sc)idou(x + dx[i],y + dy[i]);
    }
    return 0;
}
int main()
{
    while(1)
    {
        int xs,ys,n,d,x,y;
        ans = 0;
        for(int i = 0; i < w; i++)
        {
            for(int j = 0; j < h; j++)
            {
                block[i][j] = 0;
            }
        }
        scanf("%d%d",&w,&h);
        if(w == 0&&h == 0)break;
        scanf("%d%d",&ys,&xs);
        scanf("%d%d",&yg,&xg);
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d%d%d",&c,&d,&y,&x);
            if(d == 1)
            {
                for(int i = 0; i < 2; i++)
                {
                    for(int j = 0; j < 4; j++)
                    {
                        block[x + j][y + i] = c;
                    }
                }
            }
            if(d == 0)
            {
                for(int i = 0; i < 2; i++)
                {
                    for(int j = 0; j < 4; j++)
                    {
                        block[x + i][y + j] = c;
                    }
                }
            }
        }
        sc = block[xs][ys];
        //block[xg][yg] = 9;
        /*for(int i = 0; i < w; i++)
        {
            for(int j = 0; j < h; j++)
            {
                printf("%d",block[i][j]);
            }
            printf("\n");
        }*/
        idou(xs,ys);
        if(ans == 1)printf("OK\n");
        else printf("NG\n");
    }
    return 0;
}