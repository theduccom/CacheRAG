#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int w[30][30];
int &pos(int y,int x){
  return w[y+10][x+10];
}

int main(){
  const int d[3][5][5] ={
    {
      {0,0,0,0,0},
      {0,0,1,0,0},
      {0,1,1,1,0},
      {0,0,1,0,0},
      {0,0,0,0,0}
    },
    {
      {0,0,0,0,0},
      {0,1,1,1,0},
      {0,1,1,1,0},
      {0,1,1,1,0},
      {0,0,0,0,0}
    },
    {
      {0,0,1,0,0},
      {0,1,1,1,0},
      {1,1,1,1,1},
      {0,1,1,1,0},
      {0,0,1,0,0}
    }
  };
  int x,y,s;

  while(~scanf("%d,%d,%d",&x,&y,&s)){
    s -= 1;
    x -= 2;
    y -= 2;
    REP(i,5) REP(j,5)
      pos(x+i,y+j) += d[s][i][j];
  }
  int bl = 0;
  int mx = 0;
  REP(i,10) REP(j,10){
    if(pos(i,j) == 0) bl++;
    mx = max(mx, pos(i,j));
  }
  cout << bl << endl << mx << endl;
  return 0;
}