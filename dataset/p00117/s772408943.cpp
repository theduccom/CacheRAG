#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int MAXN = 21, INF = 1<<29;

int cost[MAXN][MAXN] ;
int d[MAXN];
bool used[MAXN];
int a, b, c1, c2, x1, x2, y1, y2, n, m;
char t;

int main()
{
    cin >> n >> m;
    
    memset(cost, INF, sizeof(cost));
    rep(i,n)rep(j,n) cost[i][j] = INF;
    memset(d, INF, sizeof(d));
    REP(n) d[i] = INF;
    REP(m)
    {
        cin >> a >> t >> b >> t >> c1 >> t >> c2;
        a--; b--;
        cost[a][b] = c1;
        cost[b][a] = c2;
    }
    cin >> x1 >> t >> x2 >> t >> y1 >> t >> y2;
    x1--; x2--;

    d[x1] = 0;
    int cgo, cback;

    while(true)
    {
        int v = -1;
        rep(i,n)if(!used[i] &&(v == -1 || d[i] < d[v])) v = i;
        if(v == -1) break;

        used[v] = true;
        rep(i,n) d[i] = min(d[i], d[v] + cost[v][i]);
    }
    cgo = d[x2];

    memset(d, INF, sizeof(d));
    
    REP(n) d[i] = INF;
    d[x2] = 0;
    memset(used, false, sizeof(used));
    
    while(true)
    {
        int v = -1;
        rep(i,n)if(!used[i] &&(v == -1 || d[i] < d[v])) v = i;
        if(v == -1) break;

        used[v] = true;
        rep(i,n) d[i] = min(d[i], d[v] + cost[v][i]);
    }
    cback = d[x1];

    cout << y1 - y2 - cgo - cback << endl;

    return 0;
}