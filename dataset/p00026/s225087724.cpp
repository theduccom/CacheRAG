#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i=(a);i<ll(b);i++)
#define rep(i,b) loop(i,0,b)

int main(){
    int X,Y,t;
    int g[20][20];
    rep(i,20)rep(j,20) g[i][j] = 0;
    while(~scanf("%d,%d,%d\n",&X,&Y,&t)){
        rep(y,10)rep(x,10){
            if(t==1 && abs(x-X)+abs(y-Y) <= 1) ++g[y][x];
            if(t==2 && max(abs(x-X),abs(y-Y)) <= 1) ++g[y][x];
            if(t==3 && abs(x-X)+abs(y-Y) <= 2) ++g[y][x];
        }
    }
    map<int,int> m;
    rep(i,10)rep(j,10) m[g[i][j]]++;
    printf("%d\n%d\n", m.begin()->second, m.rbegin()->first);
}