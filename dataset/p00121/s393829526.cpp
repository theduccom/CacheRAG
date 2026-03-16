#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<queue>
#include<map>
#include<set>

using namespace std;

typedef long long ll;

struct node
{
    int sta[8];
    int step;
    int p;
};
queue<node> q;
int s[8];

int d[] = {-4,-1,1,4};
int hash[1000000];
int w[10],vec[10];

void init()
{
    w[0] = 1;
    int sum = 1;
    for(int i=1;i<=7;i++)
    {
        sum*=i;
        w[i] = sum;
    }
}

void solve()
{
    while(!q.empty()) q.pop();
    memset(hash,-1,sizeof(hash));

    node ff,gg,hh;
    for(int i=0;i<8;i++)
        ff.sta[i] = i;
    ff.step = 0;


    int mark = 0,pos;
    int n = 8;
    for(int i=0;i<n;i++)
    {
        int cnt = 0;
        for(int j=i+1;j<n;j++)
        {
            if(s[j]<s[i]) cnt++;
        }
        vec[n-i-1] = cnt;
    }
    for(int i=0;i<n;i++)
        mark += vec[i]*w[i];
    mark++;
    ff.p = mark;
    q.push(ff);
    hash[mark] = 0;

    int cur[8],next[8];
    while(!q.empty())
    {
        gg = q.front();
        q.pop();
        memcpy(cur,gg.sta,sizeof(gg.sta));
        int step = gg.step;

        for(int i=0;i<8;i++)
        {
            if(cur[i] == 0)
            {
                pos = i;
                break;
            }
        }

        for(int i=0;i<4;i++)
        {
            int x = pos+d[i];
            if(x<0 || x>7) continue;
            if(x==3 && pos==4) continue;
            if(x==4 && pos==3) continue;

            memcpy(next,cur,sizeof(cur));

            int tmp = next[x];
            next[x] = next[pos];
            next[pos] = tmp;

            int mark = 0;
            for(int k=0;k<8;k++)
            {
                int cnt = 0;
                for(int j=k+1;j<8;j++)
                {
                    if(next[j]<next[k]) cnt++;
                }
                vec[n-k-1] = cnt;
            }
            for(int k=0;k<8;k++)
                mark += vec[k]*w[k];
            mark++;
            if(hash[mark]!=-1) continue;

            memcpy(hh.sta,next,sizeof(next));
            hh.step = step+1;
            hh.p = mark;
            q.push(hh);
            hash[mark] = hh.step;
        }
    }
}

int main()
{
   // freopen("1.txt","w",stdout);

    init();
    solve();
    int x;
    while(~scanf("%d",&s[0]))
    {
        for(int i=1;i<=7;i++)
        {
            scanf("%d",&x);
            s[i] = x;
        }
        int omg = 0;
        for(int i=0;i<8;i++)
        {
            int cnt = 0;
            for(int j=i+1;j<8;j++)
            {
                if(s[j]<s[i])
                    cnt++;
            }
            vec[8-1-i] = cnt;
        }
        for(int i=0;i<8;i++)
            omg += vec[i]*w[i];
        omg++;
        printf("%d\n",hash[omg]);
    }
    return 0;
}