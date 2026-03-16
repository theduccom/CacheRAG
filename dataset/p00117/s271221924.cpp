//A Reward for a Carpenter
#include <iostream>
#include <cstdio>
#define rep(i,n) for(int i = 0;i < n;i++)
#define mp make_pair
using namespace std;

const int inf = 1e9;
int dis[30][30];
int main(){
    int n,m;
    cin >> n>>m;
    rep(i,n){
        rep(j,n){
            dis[i][j]=inf;
        }
    }
    rep(i,n){
        dis[i][i]=0;
    }
    rep(i,m){
        int a,b,c,d;
        scanf("%d,%d,%d,%d" ,&a,&b,&c,&d);
        a--;
        b--;
        dis[a][b]=c;
        dis[b][a]=d;
    }
    int x1,x2,y1,y2;
    scanf("%d,%d,%d,%d" ,&x1,&x2,&y1,&y2);
    x1--;
    x2--;
    rep(k,n){
        rep(i,n){
            rep(j,n){
                dis[i][j]=min(dis[i][j],min(inf,dis[i][k]+dis[k][j]));
            }
        }
    }
    
    cout << -dis[x2][x1]-dis[x1][x2] + y1 - y2 << endl;
}