#include <iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<random>
using namespace std;
int inf = 1e9;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
vector<string> g(8, "--------");

void dfs(int x, int y){
  g[y][x] = '0';
  for(int i=0; i<4; i++){
    int nx = x;
    int ny = y;
    for(int j=0; j<3; j++){
      nx += dx[i]; ny += dy[i];
      if( nx < 0 || nx >= 8 || ny < 0 || ny >= 8 ) break;

      if( g[ny][nx] == '1' ){
        g[ny][nx] = '0';
        dfs(nx, ny);
      }

    }
  }

}


int main() {

  int n; cin >> n;
  for(int i=0; i<n; i++){
    for(int j=0; j<8; j++) cin >> g[j];
    int x, y; cin >> x >> y;
    x--; y--;
    dfs(x, y);

    cout << "Data " << i+1 << ":" << endl;
    for(int j=0; j<8; j++){
      cout << g[j] << endl;
    }

  }

  return 0;
}




// EOF