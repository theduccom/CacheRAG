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
static const int dx[4] = {1,0,0,-1};
static const int dy[4] = {0,1,-1,0};

int main(void){
  int n;
  cin>>n;
  REP(a,n){
    printf("Data %d:\n",a+1);
    string line;
    vector<string> grid;
    REP(i,8){
      cin>>line;
      grid.push_back(line);
    }
    queue<P> p;
    int x,y;
    cin>>x>>y;
    p.push(P(x,y));
    while(!p.empty()){
      P tmp = p.front(); p.pop();
      int px = tmp.first; int py = tmp.second;
      grid[py-1][px-1] = '0';
      for(int k = 1; k<=3; k++){
       for(int r=0; r<4; r++){
        int ddx = dx[r]*k + (px-1);
        int ddy = dy[r]*k + (py-1);
        if(ddx>=0&&ddx<8&&ddy>=0&&ddy<8){
         if(grid[ddy][ddx]=='1'){
          p.push(P(ddx+1,ddy+1));
         }
        }
       }
      }
    }
    REP(y,8){
      REP(x,8){
        cout<<grid[y][x];
      }
      cout<<endl;
    }
  } 
  return 0;
}