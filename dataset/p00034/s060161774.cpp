#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; ++i)
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define P pair<int, int>
const double EPS = 1e-12;
const int N = 10;
#define EQ(a,b) (abs((a)-(b)) < EPS)

int v[N], a, b;

int solve(){
  double d = 0, sum = 0;
  REP(i, N) sum += v[i];
  if(a >= b){
    REP(i, N - 1){
      double st = d / a, et = (d + v[i]) / a, sb = min(sum - b * et, sum - b * st), eb = max(sum - b * et, sum - b * st);
      //cout <<i + 1 <<" | " <<st <<", " <<et <<" | " <<d <<", " <<d + v[i] <<", " <<sb <<", " <<eb <<endl;
      if((eb >= d && eb <= d + v[i]) || (sb >= d && sb <= d + v[i])) return i + 1;
      d += v[i];
    }
    return 10;
  } else{
    for(int i = 9; i > 0; --i){
      double st = d / b, et = (d + v[i]) / b, sb = min(sum - a * et, sum - a * st), eb = max(sum - a * et, sum - a * st);
      //cout <<i + 1 <<" | " <<st <<", " <<et <<" | " <<d <<", " <<d + v[i] <<", " <<sb <<", " <<eb <<endl;
      if(EQ(d + v[1], sb)) return i;
      if((eb >= d && eb <= d + v[i]) || (sb >= d && sb <= d + v[i])) return i + 1;
      d += v[i];
    }
    return 1;
  }
}

int main() {
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7], &v[8], &v[9], &a, &b) != EOF) cout <<solve() <<endl;
  return 0;
}