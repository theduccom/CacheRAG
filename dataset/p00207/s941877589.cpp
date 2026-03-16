#include <iostream>
#include <cstring>
#include <queue>
#include <utility>
using namespace std;

typedef pair<int,int> P;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};
const int MAX_W = 102, MAX_H = 102;
int maze[MAX_H][MAX_W];
int w, h, xs, ys, xg, yg, color;

void solve() {
  memset(maze, 0, sizeof maze);
  int n;
  cin>>xs>>ys>>xg>>yg>>n;
  rep(i,n) {
    int c, d, x, y;
    cin>>c>>d>>x>>y;
    //cout<<c<<d<<x<<y<<endl;
    if (d == 0) {
      REP(j,x,x+4) REP(k,y,y+2) maze[k][j] = c;
    } else {
      REP(j,x,x+2) REP(k,y,y+4) maze[k][j] = c;
    }
  }
  
  /*
  rep(i,h+1) {
    rep(j,w+1) cout<<maze[i][j];
    cout<<endl;
  }*/
  
  if (maze[ys][xs] == 0) {
    cout<<"NG"<<endl;
    return;
  } else {
    color = maze[ys][xs];
  }
  
  bool flag = false;
  queue<P> que;
  que.push(P(xs, ys));
  while (!que.empty() && !flag) {
    P p = que.front(); que.pop();
    int tx = p.first, ty = p.second;
    if (tx == xg && ty == yg) {
      flag = true; continue;
    }
    if (maze[ty][tx] == 0) continue;
    maze[ty][tx] = 0;
    
    rep(z,4) {
      int ttx = tx + dx[z], tty = ty + dy[z];
      if (ttx < 1 || tty < 1 || ttx > w || tty > h) continue;
      if (maze[tty][ttx] != color) continue;
      que.push(P(ttx, tty));
    }
  }
  
  if (flag) {
    cout<<"OK"<<endl;
  } else {
    cout<<"NG"<<endl;
  }
}

int main (int argc, char const* argv[]) {
  while (cin>>w>>h, w||h) {
    solve();
  }
  return 0;
}