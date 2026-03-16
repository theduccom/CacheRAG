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
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
vector<string> grid;
static const int dx[4] = {0,1,0,-1};
static const int dy[4] = {1,0,-1,0,};
void um(int x, int y){
  grid[y][x] = '0';
  REP(r,4) if(y+dy[r]>=0&&y+dy[r]<12&&x+dx[r]>=0&&x+dx[r]<12&&grid[y+dy[r]][x+dx[r]]=='1'){
    um(x+dx[r], y+dy[r]);
  }
}
int main(void){
  string line;
  while(cin>>line){
    grid.clear();
    grid.push_back(line);
    REP(i,11){
      cin>>line;
      grid.push_back(line);
    }
    int ans = 0; 
    REP(y,12)REP(x,12){
        if(grid[y][x]=='1'){
          ans++;
          um(x,y);
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}