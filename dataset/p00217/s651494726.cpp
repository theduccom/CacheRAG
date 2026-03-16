#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
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
typedef pair<int, int> PII;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  int n;
  while(cin>>n){
    if(n==0) break;
    int max_l=-1;
    int p_max = 0;
    REP(i,n){
      int p,d1,d2;
      cin>>p>>d1>>d2;
      if(d1+d2>max_l){
        max_l = d1+d2;
        p_max = p;
      }
    }
    printf("%d %d\n",p_max,max_l);
  }

  return 0;
}