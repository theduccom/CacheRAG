#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i=(a);i<ll(b);i++)
#define rep(i,b) loop(i,0,b)

void rec(char g[20][20], int ci, int cj){
    g[ci][cj] = '0';
    int di[] = {0,1,0,-1};
    int dj[] = {1,0,-1,0};
    rep(dir,4){
        rep(dist,4){
            int ni = ci+di[dir]*dist;
            int nj = cj+dj[dir]*dist;
            if(ni >= 8 || nj >= 8 || ni < 0 || nj < 0 || g[ni][nj] == '0') continue;
            rec(g,ni,nj);
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    rep(tt,t){
        char g[20][20];
        rep(i,8) scanf("%s",g[i]);
        int i,j;
        scanf("%d%d",&i,&j);
        rec(g,j-1,i-1);
        printf("Data %d:\n",(int)tt+1);
        rep(i,8) puts(g[i]);
    }
}