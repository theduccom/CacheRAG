#include<stdio.h>
#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<cstring>
#include<algorithm>
#define cdebug() freopen("C:\\Users\\netmaster.ASUS\\Desktop\\123.txt","r",stdin)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rev(i,a,b) for(int i=(a);i>=(b);i--)
#define clr(a,x) memset(a,x,sizeof a)
#define inf 0x3f3f3f3f
typedef long long LL;
using namespace std;

const int mod=1e9 +7;
const int maxn=2005;
const int maxm=4005;

int done[8][8][8][8][8][8][8];
struct node
{
    int d[8],w,dir;
    node()
    {

    }
    node(int dd[],int di,int ww)
    {
        rep(i,0,8)
        d[i]=dd[i];
        dir=di;
        w=ww;
    }
};
inline int& gbool(int dd[])
{
    return done[dd[0]][dd[1]][dd[2]][dd[3]][dd[4]][dd[5]][dd[6]];
}
int dx[][3]={1,4,-1,0,2,5,1,3,6,2,7,-1,0,5,-1,1,4,6,2,5,7,3,6,-1};
void bfs()
{
    int dd[8];
    queue<node>q;
    clr(done,0);
    rep(i,0,8)
    dd[i]=i;
    q.push(node(dd,0,0));
    gbool(dd)=1;
    while(!q.empty())
    {
        node x=q.front();q.pop();
        rep(i,0,3)
        if(dx[x.dir][i]!=-1)
        {
            node cur=x;
            swap(cur.d[x.dir],cur.d[dx[x.dir][i]]);
            cur.dir=dx[x.dir][i];
            cur.w++;
            if(!gbool(cur.d))
            {
                gbool(cur.d)=x.w+1;
                q.push(cur);
            }
        }
    }
}
int da[8];
int main()
{bfs();
    while(~scanf("%d",&da[0]))
    {
        int sum=0;
        rep(i,1,8)
        scanf("%d",&da[i]),sum+=abs(i-da[i]);

        if(!sum)
        {
            puts("0");
            continue;
        }
        printf("%d\n",gbool(da));
    }
    return 0;
}