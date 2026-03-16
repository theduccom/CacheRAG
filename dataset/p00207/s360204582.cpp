#include <iostream>
#include <string>
#include <queue>
using namespace std;

typedef pair<int, int> P;


int w, h;
int xs, ys, xg, yg, n, c, d, x, y;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void put_b(int a[][105]) {
  int X, Y;
  if(d == 0) X = 4, Y = 2;
  else X = 2, Y = 4 ;
  for(int i = 0; i < Y; i++)
    for(int j = 0; j < X; j++)
      a[y + i][x + j] = c;
}

bool bfs(int a[][105]) {
  int cs = a[ys][xs];
  if(cs != a[yg][xg]) return false;

  //cout << ys << xs << endl;
  queue<P> que;
  que.push(P(xs, ys));
  while(que.size()) {
    P p = que.front();
    que.pop();
    if(p.first == xg && p.second == yg) return true;
    for(int i = 0; i < 4; i++) {
      int nx = p.first + dx[i], ny = p.second + dy[i];
      if(0 < nx && nx <= w && 0 < ny && ny <= h && a[ny][nx] == cs) {
	que.push(P(nx, ny));
	a[ny][nx] = 0;
      }
    }
  }
  return false;
}
int main() {
  while(cin >> w >> h, w != 0 || h != 0) {
    int a[105][105] = {};
    cin >> xs >> ys;
    cin >> xg >> yg;
    cin >> n;
  
    while(n--) {
      cin >> c >> d >> x >> y;
      put_b(a);
    }
    /*
     for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++)
      cout << a[i][j];
      cout << endl;
      }
    */
    if(bfs(a) == true) cout << "OK" << endl;
    else cout << "NG" << endl;
  }
  return 0;
}