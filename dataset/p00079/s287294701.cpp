#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>

using namespace std;

#define FOR(i,k,n) for(int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

template<class T> void debug(T begin, T end){ for(T i = begin; i != end; ++i) cerr<<*i<<" "; cerr<<endl; }
inline bool valid(int x, int y, int W, int H){ return (x >= 0 && y >= 0 && x < W && y < H); }

typedef long long ll;
const int INF = 100000000;
const double EPS = 1e-8;
const int MOD = 1000000007;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
#include <complex>
typedef complex<double> Point;
typedef vector<Point> Polygon;
double cross(Point a, Point b){
  return imag(conj(a) * b);
}
double area(Polygon P){
  double A = 0;
  REP(i, P.size()){
    A += cross(P[i], P[(i + 1) % P.size()]);
  }
  if(A < 0) A *= -1.0;
  return A / 2.0;
}
int main(){
  Point p;
  Polygon P;
  while(scanf("%lf,%lf", &p.real(), &p.imag()) != EOF){
    P.push_back(p);
  }
  printf("%.8lf\n", area(P));
  return 0;
}