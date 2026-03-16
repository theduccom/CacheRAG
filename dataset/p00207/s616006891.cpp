#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <sstream>
#include <cassert>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;
typedef pair<int,int> PI;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
#define mp make_pair
#define pb push_back
#define f first
#define s second

int dx[]={0,1,0,-1},dy[]={1,0,-1,0};

main(){
  int w,h;
  while(cin>>w>>h,w|h){
    int xs,ys,xg,yg,n;
    cin>>xs>>ys>>xg>>yg>>n;
    --xs,--ys,--xg,--yg;
    int maze[w][h];
    memset(maze,0,sizeof(maze));
    rep(i,n){
      int c,d,x,y;
      cin>>c>>d>>x>>y;
      --x,--y;
      rep(i,4-d*2)rep(j,2+d*2)maze[x+i][y+j]=c;
    }
    queue<PI> Q;
    if(maze[xs][ys]== 0 || maze[xs][ys]!=maze[xg][yg] || maze[xg][yg]==0){
      puts("NG");
      continue;
    }
    bool goal=false;
    Q.push(mp(xs,ys));
    int dp[w][h];
    memset(dp,0,sizeof(dp));
    dp[xs][ys]=1;
    while(!Q.empty()){
      int cx=Q.front().f,cy=Q.front().s;Q.pop();
      if(cx==xg && cy==yg){
        goal=true;
        break;
      }
      rep(i,4){
        int nx=cx+dx[i],ny=cy+dy[i];
        if(nx<0 || nx>=w || ny<0 || ny>=h || dp[nx][ny])continue;
        if(maze[nx][ny]!=maze[xs][ys])continue;
        dp[nx][ny]=1;
        Q.push(mp(nx,ny));
      }
    }
    cout<<(goal?"OK":"NG")<<endl;
  }
}