#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define IREP(it,array) for(vector<int>::iterator it=array.begin(); it!=array.end(); ++it)
#define PREP(it,array) for(vector<P>::iterator it=array.begin(); it!=array.end(); ++it)
#define SREP(it,array) for(vector<string>::iterator it=array.begin(); it!=array.end(); ++it)

#define MP       make_pair
#define PB       push_back
#define ALL(x)   (x).begin(),(x).end()

const int INF = 1<<29;
const double EPS = 1e-9;
double zero(double d){
  return d < EPS ? 0.0 : d;
}

typedef long long LL;
typedef pair<int,int> P;


int main()
{
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(7);

  int n,m;
  cin >> n >> m;

  int d[n+1][n+1];
  REP(i,n+1){
    fill( d[i], d[i]+n+1, INF );
    d[i][i] = 0;
  }

  REP(i,m){
    int a,b,c,dd;
    scanf( "%d,%d,%d,%d", &a, &b, &c, &dd );
    d[a][b] = c;
    d[b][a] = dd;
  }
  
  int x1,x2,y1,y2;
  scanf( "%d,%d,%d,%d", &x1, &x2, &y1, &y2 );
  
  REP(k,n+1)
    REP(i,n+1)
    REP(j,n+1)
    d[i][j] = min( d[i][j], d[i][k] + d[k][j] );
  
  int res = y1 - y2 - d[x1][x2] - d[x2][x1];
  cout << res << endl;

  return 0;
}