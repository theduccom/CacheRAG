#include <iostream>
#include <functional>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <set>
#include <queue>
#pragma comment (linker,"/STACK:102400000,102400000")
#define pi acos(-1.0)
#define eps 1e-6
#define lson rt<<1,l,mid
#define rson rt<<1|1,mid+1,r
#define FRE(i,a,b)  for(i = a; i <= b; i++)
#define FREE(i,a,b) for(i = a; i >= b; i--)
#define FRL(i,a,b)  for(i = a; i < b; i++)
#define FRLL(i,a,b) for(i = a; i > b; i--)
#define mem(t, v)   memset ((t) , v, sizeof(t))
#define sf(n)       scanf("%d", &n)
#define sff(a,b)    scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define pf          printf
#define DBG         pf("Hi\n")
typedef long long ll;
using namespace std;

#define INF 0x3f3f3f3f
#define mod 1000000009
const int maxn = 1005;
const int MAXN = 2005;
const int MAXM = 200010;
const int N = 1005;

struct Node
{
    int x,y,step;
    int g[2][4];
};

int dir[4][2]={0,1,1,0,-1,0,0,-1};
int fac[]={1,1,2,6,24,120,720,5040,40320,362880};
int a[10];
int vis[50000];

bool isok(int x,int y)
{
    if (x>=0&&x<2&&y>=0&&y<4) return true;
    return false;
}

int cantor(int w[][4])
{
    int s[8],cc=0;
    for (int i=0;i<2;i++)
        for (int j=0;j<4;j++)
            s[cc++]=w[i][j];
    int sum=0;
    for (int i=0;i<8;i++)
    {
        int t=0;
        for (int j=i+1;j<8;j++)
        {
            if (s[i]>s[j])
                t++;
        }
        sum+=(t*fac[8-i-1]);
    }
    return sum;
}

void bfs()
{
    Node st,now;
    queue<Node>Q;
    for (int i=0;i<8;i++)
        st.g[i/4][i%4]=i;
    st.step=0;
    st.x=st.y=0;
    vis[cantor(st.g)]=0;
    Q.push(st);
    while (!Q.empty())
    {
        st=Q.front();
        Q.pop();
        for (int i=0;i<4;i++)
        {
            now.x=st.x+dir[i][0];
            now.y=st.y+dir[i][1];
            now.step=st.step+1;
            if (isok(now.x,now.y))
            {
                for (int j=0;j<2;j++)
                    for (int t=0;t<4;t++)
                        now.g[j][t]=st.g[j][t];
                swap(now.g[now.x][now.y],now.g[st.x][st.y]);
                int cc=cantor(now.g);
                if (vis[cc]!=-1) continue;
                vis[cc]=now.step;
                Q.push(now);
            }
        }
    }
    return ;
}

int main()
{
//#ifndef ONLINE_JUDGE
//    freopen("C:/Users/lyf/Desktop/IN.txt","r",stdin);
//#endif
    int i,j;
    memset(vis,-1,sizeof(vis));
    bfs();
    while (~scanf("%d",&a[0]))
    {
        for (i=1;i<8;i++)
            scanf("%d",&a[i]);
        Node st;
        for (int i=0;i<8;i++)
            st.g[i/4][i%4]=a[i];
        int p=cantor(st.g);
        printf("%d\n",vis[p]);
    }
    return 0;
}