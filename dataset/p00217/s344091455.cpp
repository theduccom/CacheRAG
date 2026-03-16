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
    map<int, int> M;
    REP(i, N){
      int a, b, c; cin >>a >>b >>c;
      M[a] = b + c;
    }
    int tar = M.begin()->first;
    for(pair<const int, int> p : M) if(M[p.first] > M[tar]) tar = p.first;
    cout <<tar <<" " <<M[tar] <<endl;
  }
  return 0;
}