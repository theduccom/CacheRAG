#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>

using namespace std;

const int ans = 101234567;
int dx[] = {-1, 1, -4, 4, };

int swapnum(int n, int x, int y)
{
    int a[10];
    for(int i=8; i>=0; --i)
    {
        a[i] = n%10;
        n/=10;
    }
    swap(a[x], a[y]);
    int ret = 0;
    for(int i=0; i<9; i++) ret = ret*10+a[i];
    return ret;
}

int pos0(int n)
{
    int a[10];
    for(int i=8; i>=0; --i)
    {
        a[i] = n%10;
        n/=10;
    }
//    for(int i=0; i<=8; i++) cout << a[i] << "*";
//    cout << endl;
    for(int i=0; i<=8; i++) if(a[i] == 0) return i;
    return -1;
}

    map<int, int> d;
void bfs()
{
    int n = ans;
    queue<int> que;
    que.push(n);
    d[n] = 0;
    int now, nxt;
    while(!que.empty())
    {
        now = que.front(); que.pop();
//        if(now == ans) return d[ans];
        int pos = pos0(now);
        for(int i=0; i<4; i++)
        {
            if(pos == 4 && dx[i]==1) continue;
            if(pos == 5 && dx[i]==-1) continue;
            nxt = pos+dx[i];
            if(nxt<1 || nxt>8) continue;
            nxt = swapnum(now, pos, nxt);
            if(d.find(nxt)==d.end())
            {
                d[nxt] = d[now]+1;
                que.push(nxt);
            }
        }
    };
}

int main()
{
    bfs();
    int a, n=1;
    while(scanf("%d", &a) == 1)
    {
        n = n*10+a;
        for(int i=0; i<7; i++)
        {
            scanf("%d", &a);
            n = n*10+a;
        }
        cout << d[n] << endl;
        n=1;
    }

    return 0;
}