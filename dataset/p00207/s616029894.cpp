#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<utility>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
 
using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 1e+9
#define EPS 1e-9
#define rep(i,j) for(int i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = j; i < (k); i++)
typedef long long ll;
int stage[128][128];
bool mem[128][128];
int xg,yg;
int w,h;
void dfs(int x,int y,int col){
    if(x < 1 || y < 1 || x > w || y > h)return ;
    if(mem[y][x])return ;
    if(stage[y][x] != col)return ;
    mem[y][x] = true;
    rep(i,4){
        if(col == stage[y+dy[i]][x+dx[i]]){
            dfs(x + dx[i], y + dy[i], col);
        }
    }
    return ;
}
int main(){
    while(scanf("%d%d",&w,&h),w|h){
        memset(stage,0,sizeof(stage));
        rep(i,128)rep(j,128)mem[i][j] = false;
        int xs,ys;
        scanf("%d%d",&xs,&ys);
        scanf("%d%d",&xg,&yg);
         
        int n;
        scanf("%d",&n);
 
        rep(q,n){
            int c,d,x,y;
            scanf("%d%d%d%d",&c,&d,&x,&y);
            if(d == 0){
                reps(i,x,x+4){
                    reps(j,y,y+2){
                        stage[j][i] = c;
                    }
                }
            }
            else{
                reps(i,x,x+2){
                    reps(j,y,y+4){
                        stage[j][i] = c;
                    }
                }
            }
        }
        dfs(xs,ys,stage[ys][xs]);
        bool f = mem[yg][xg];
        (f) ? puts("OK") : puts("NG");
    }
    return 0;
}