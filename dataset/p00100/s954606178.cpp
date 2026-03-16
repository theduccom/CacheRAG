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
typedef long long int Int;
const int NORMA = 1000000;

int main() {
  int N;
  while(cin >>N && N){
    map<Int, Int> m;
    set<Int> s;
    vector<Int> v;
    REP(i, N){
      Int a, b, c; cin >>a >>b >>c;
      m[a] += b * c;
      if(s.find(a) == s.end()) v.push_back(a);
      s.insert(a);
    }
    vector<Int> ans;
    REP(i, v.size()) if(m[v[i]] >= NORMA) ans.push_back(v[i]);
    if(ans.size() == 0) cout <<"NA" <<endl;
    else REP(i, ans.size()) cout <<ans[i] <<endl;
  }
  return 0;
}