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
 
int main() {
  int N;
  while(cin >>N && N){
    REP(i, N){
      int m, e, j; cin >>m >>e >>j;
      if(m == 100 || e == 100 || j == 100) cout <<"A" <<endl;
      else if(((double)m + e) / 2.0 >= 90) cout <<"A" <<endl;
      else if(((double)m + e + j) / 3.0 >= 80) cout <<"A" <<endl;
      else if(((double)m + e + j) / 3.0 >= 70) cout <<"B" <<endl;
      else if(((double)m + e + j) / 3.0 >= 50 && (m >= 80 || e >= 80)) cout <<"B" <<endl;
      else cout <<"C" <<endl;
    }
  }
  return 0;
}