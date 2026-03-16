#include<cstdio>
#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stdlib.h>
#include<queue>
#include<map>
#include<vector>
#include<list>
#include<stack>
#include<functional>
 
using namespace std;
 
#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<n;i++)

 
const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
 
typedef pair<int ,int > P;
 
char maze[105][105];
 
int sx,sy;
int gx,gy;
int w,h;
 
char sc;        //スタート地点のカラー
 
//stdin
//stdout
 
void dfs(int x,int y)
{
    maze[y][x]='9';
 
    rep(i,4)
    {
/*        for(int j=-1;j<=1;j++)
        {*/
            int nx=x+dx[i];
            int ny=y+dy[i];
 
            if(0<=nx && nx<=w && 0<=ny && ny<=h &&maze[ny][nx]==sc)
            {
                dfs(nx,ny);
            }
 
/*        }*/
    }
    return ;
}
 
void solve()
{
 
    rep(i,101)
        rep(j,101)
        maze[i][j]='0';
 
    int n;
    char c;
    int d;
    int x,y;
 
    cin>>sx>>sy;
    cin>>gx>>gy;
 
    cin>>n;
 
    rep(i,n)
    {
        cin>>c>>d>>x>>y;
 
        if(d==1)
        {
            rep(j,2)
            {
                rep(k,4)
                {
                    maze[y+k][x+j]=c;
 
                }
            }
        }
        else if (d==0)
        {
            rep(j,4)
            {
                rep(k,2)
                {
                    maze[y+k][x+j]=c;
 
                }
            }
        }
 
    }
//6 6
//1 1
//3 6
//2
//1 0 1 1
//1 1 3 3
//  rep(i,w+1)
//  {
//      rep(j,h+1)
//      {
//          cout<<maze[i][j];
//
//      }
//      cout<<endl;
//  }
//
//  cout<<maze[gx][gy]<<endl;
 
    if(maze[sy][sx]=='0')
    {
        cout<<"NG"<<endl;
        return;
    }
    else
    {
        sc=maze[sy][sx];
        dfs(sx,sy);
    }
     
    //rep(i,w+1)
    //{
    //  rep(j,h+1)
    //  {
    //      cout<<maze[i][j];
 
    //  }
    //  cout<<endl;
    //}
 
    if(maze[gy][gx]=='9')
    {
        cout<<"OK"<<endl;
        return;
    }
    else
    {
        cout<<"NG"<<endl;
        return;
    }
 
 
 
}
 
int main()
{
 
    while(cin>>w>>h)
    {
        if(w==0 && h==0)
        {
            return 0;
        }
        else
        {
            solve();
        }
    }
 
 
    return 0;
}