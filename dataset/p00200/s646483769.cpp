#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define MAX 100000000
#define pb push_back
using namespace std; 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;
  
int main(){
  int n,m;
  int x,y,c,t;
  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0){
      break;
    }
    int C[m][m],T[m][m];
    for(int i = 0;i < m;i++){
      for(int j = 0;j < m;j++){
	T[i][j] = MAX;
	C[i][j] = MAX;
      }
    }
    for(int i = 0;i < n;i++){
      cin >> y >> x >> c >> t;
      y--;x--;
      C[y][x] = c;
      C[x][y] = c;
      T[y][x] = t;
      T[x][y] = t;
    }
    for(int k = 0;k < m;k++){
      for(int i = 0;i < m;i++){
	for(int j = 0;j < m;j++){
	  if(T[i][k] != MAX && T[k][j] != MAX){
	    T[i][j] = min(T[i][j],T[i][k] + T[k][j]);
	  }
	  if(C[i][k] != MAX && C[k][j] != MAX){
	    C[i][j] = min(C[i][j],C[i][k]+C[k][j]);
	  }
	}
      }
    }
    int a;
    cin >> a;
    for(int i = 0;i < a;i++){
      int p,q,r;
      cin >> p >> q >> r;
      p--;q--;
      int minc = MAX,mint = MAX;
      if(r == 1){
	P(T[p][q]);
      }else if(r == 0){
	P(C[p][q]);
      }
    }
  }
  return 0;
}