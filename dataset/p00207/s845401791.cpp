#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <stack>
#include <utility>
#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)
using namespace std;

typedef pair<int,int> pii;
int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
int sx,sy,gx,gy;
int w,h,n;
int g[1000][1000];
bool valid(int y, int x){ return 0<=x && x<w && 0<=y && y<h; }

int main(){
    while(cin>>w>>h && w){
        cin>>sx>>sy>>gx>>gy;
        sx--,sy--,gx--,gy--;
        rep(i,h)rep(j,w)g[i][j]=0;
        cin>>n;
        rep(i,n){
            int c,d,x,y;
            cin>>c>>d>>x>>y;
            x--,y--;
            for(int j=0;j<4;j++)g[y+j%2][x+j/2]=c;
            if(d==0)x+=2;else y+=2;
            for(int j=0;j<4;j++)g[y+j%2][x+j/2]=c;
        }
        int C=g[sy][sx];
        // cout<<C<<endl;
        // rep(i,h){
        //     rep(j,w){
        //         cout<<g[i][j];
        //     }
        //     cout<<endl;
        // }
        rep(i,h)rep(j,w)g[i][j]= (g[i][j]==C) ? C : 0;

        bool vis[1000][1000]={};
        vis[sy][sx]=true;
        if(C){
            stack<pii> s;
            vis[sy][sx]=true;
            s.emplace(sy,sx);
            while(s.size()){
                int y,x;
                tie(y,x) = s.top();s.pop();
                rep(d,4){
                    int nx=x+dx[d],ny=y+dy[d];
                    if(!valid(ny,nx))continue;
                    if(vis[ny][nx])continue;
                    if(!g[ny][nx])continue;
                    vis[ny][nx]=true;
                    s.emplace(ny,nx);
                }
            }
            // rep(i,h){
            //     rep(j,w){
            //         cout<<vis[i][j];
            //     }
            //     cout<<endl;
            // }
        }
        puts(C && vis[gy][gx] ? "OK" : "NG");
    }
}