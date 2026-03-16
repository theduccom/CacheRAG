#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i=(a);i<ll(b);i++)
#define rep(i,b) loop(i,0,b)

int h,w;
char g[110][110];
int vis[110][110];
map<char,int> di = {
    {'>',0},
    {'<',0},
    {'v',1},
    {'^',-1}
}, dj = {
    {'>',1},
    {'<',-1},
    {'v',0},
    {'^',0}
};

pair<int,int> solve(int ci, int cj){
    if(vis[ci][cj]) return make_pair(-1,-1);
    vis[ci][cj] = true;
    if(g[ci][cj] == '.') return make_pair(ci,cj);
    int c = g[ci][cj];
    return solve(ci+di[c], cj+dj[c]);
}

int main(){
    while(scanf("%d%d",&h,&w), w != 0){
        rep(i,h) scanf("%s",g[i]);
        rep(i,h)rep(j,w) vis[i][j] = false;
        int i,j;
        tie(i,j) = solve(0,0);
        if(i==-1) puts("LOOP");
        else printf("%d %d\n",j,i);
    }
}