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
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
typedef complex<double> P;
const int L = 1000010;

int N, X;
bool p[L];

void init(){
  REP(i, L) p[i] = 1;
  p[0] = p[1] = 0;
  for(int i = 2; i <= sqrt(L); ++i){
    if(!p[i]) continue;
    for(int j = i + i; j < L; j += i) p[j] = 0;
  }
}

int solve(vector<int> &v){
  for(int i = X; i >= 0; --i) if(p[i] && v[i]) return i;
  return -1;
}

int main() {
  init();
  while(cin >>N >>X && N && X){
    vector<int> num(N), v(L, 0);
    v[0] = 1;
    REP(i, N){
      cin >>num[i];
      for(int j = num[i]; j < L; j++) if(v[j - num[i]]) v[j] = 1;
    }
    int res = solve(v);
    if(res == -1) cout <<"NA" <<endl;
    else cout <<res <<endl;
  }
  return 0;
}