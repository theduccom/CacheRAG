#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int dp[2054360];
int a[2][4]= {0,1,2,3,4,5,6,7};
int mov[4][2] = {1,0,0,-1,-1,0,0,1};

int encode()
{
    return a[0][0]*262144+a[0][1]*32768+a[0][2]*4096+a[0][3]*512+a[1][0]*64+a[1][1]*8+a[1][2];
}

void dfs(int x,int y,int ord)
{
    dp[encode()] = ord;
    for(int i=0; i<4; i++)
    {
        int tx = x + mov[i][0], ty = y + mov[i][1];
        if(tx >= 0 && tx < 2 && ty >= 0 && ty < 4)
        {
            swap(a[x][y],a[tx][ty]);
            if(dp[encode()] > ord+1)
                dfs(tx, ty, ord+1);
            swap(a[x][y], a[tx][ty]);
        }
    }
    return;
}

int main()
{
    for(int i=0;i<2054360;i++) dp[i] = 90;
    dfs(0,0,0);
    while(~scanf("%d%d%d%d%d%d%d%d",&a[0][0],&a[0][1],&a[0][2],&a[0][3],&a[1][0],&a[1][1],&a[1][2],&a[1][3]))
    {
        int tx,ty;
        printf("%d\n",dp[encode()]);
    }
    return 0;
}

/*
#include<cstdio>
#include<cstring>
#include<queue>
#include<string>
#include<map>
using namespace std;

const int fin = 342391;

int a[2][4];
int mov[4][2]={1,0,0,-1,-1,0,0,1};

struct status
{
    //int board;
    int x,y;
    int ord;
};

void print(int (*p)[4])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }
    printf("\n");
}

int encode(int (*p)[4])
{
    int sum = 0, temp = 1;
    for(int i=7;i>=0;i--)
        sum += temp*p[i/4][i%4], temp *= 8;
    return sum;
}

int decode_change(int zx,int zy,int bx,int by,int bd)
{
    int cost[2][4] = {0};
    int pt = 8,mod = 8*8*8*8*8*8*8;
    while(pt)
    {
        int q = 8 - pt;
        cost[q/4][q%4] = bd/mod;
        bd %= mod, mod /= 8;
        pt--;
    }
    swap(cost[zx][zy], cost[bx][by]);
    return encode(cost);
}

int bfs(int xa,int xb)
{
    queue<struct status> q;
    struct status tmp;
    map<int,int> m;
    m.clear();

    tmp.board = encode(a);

    tmp.ord = 0, tmp.x = xa, tmp.y = xb;
    q.push(tmp);

    int flag = -1;
    while(!q.empty())
    {
        if(flag == -1)
        {
            struct status t = q.front();
            if(t.board == fin) flag = t.ord;
            q.pop();
            for(int i=0; i<4; i++)
            {
                int tx = t.x + mov[i][0], ty = t.y + mov[i][1];
                if( tx >= 0 && tx < 2 && ty >= 0 && ty < 4)
                {
                    int newb = decode_change(t.x,t.y,tx,ty,t.board);
                    if(!m[newb])
                    {
                        struct status nt;
                        nt.x = tx, nt.y = ty, nt.board = newb, nt.ord = t.ord + 1;
                        m[newb] = 1;
                        q.push(nt);
                    }
                }
            }
        }
        else
            q.pop();
    }
    return flag;
}

int main()
{
    while(~scanf("%d",&a[0][0]))
    {
        int tx,ty;
        if(!a[0][0])
            tx = 0, ty = 0;
        for(int i=1; i<8; i++)
        {
            scanf("%d",&a[i/4][i%4]);
            if(!a[i/4][i%4])
                tx = i/4, ty = i%4;
        }
        printf("%d\n",bfs(tx,ty));
    }
    return 0;
}

0 1 2 3 4 5 6 7
1 0 2 3 4 5 6 7
7 6 5 4 3 2 1 0

*/