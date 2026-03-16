#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
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
typedef pair<int, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  int w,sengetu=4280;
  while(cin>>w){
    int ryokin=1150;
    if(w==-1) break;
    if(w>10) ryokin+=min(w-10,10)*125;
    if(w>20) ryokin+=min(w-20,10)*140;
    if(w>30) ryokin+=(w-30)*160;
    cout<<-(ryokin - sengetu)<<endl;
  }
  return 0;
}