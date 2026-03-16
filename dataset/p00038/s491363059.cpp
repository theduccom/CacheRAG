#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define REP(i,a,b) for((i)=(a);(i)<(int)(b);(i)++)
#define rep(i,n) REP(i,0,n)
// BEGIN CUT HERE
#define foreach(itr,c) for(typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}
// END CUT HERE

int main(){
  int i,j,k,n;
  int res[7],tmp,maxi,f;
  vector<int> in(5);
  set<int> s;
  string data[7] = {"four card","full house","straight","three card","two pair","one pair","null"};

  while(scanf("%d,%d,%d,%d,%d",&in[0],&in[1],&in[2],&in[3],&in[4],&in[5]) != EOF){
    rep(i,7) res[i] = 0;
    s.clear();
    rep(i,5) s.insert(in[i]);
    f = 1;
    sort(in.begin(),in.end());

    maxi = 0;
    rep(i,5){
      tmp = 0;
      rep(j,5) if(in[i] == in[j]) tmp++;
      if(maxi < tmp) maxi = tmp;
    }

    if((int)s.size() == 2){
      if(maxi == 4) res[0] = 1;
      if(maxi == 3) res[1] = 1;
    }
    if((int)s.size() == 3){
      if(maxi == 3) res[3] = 1;
      if(maxi == 2) res[4] = 1;
    }
    if((int)s.size() == 4) res[5] = 1;

    REP(i,1,5) if(in[i-1] + 1 != in[i]) f = 0;
    if(f && (int)s.size() == 5) res[2] = 1;
    f = 1;
    if(in[0] = 1 && in[1] == 10 && in[2] == 11 && in[3] == 12 && in[4] == 13) res[2] = 1;

    res[6] = 1;

    rep(i,7) if(res[i]){
      cout << data[i] << endl;
      break;
    }
  }


  return 0;
}