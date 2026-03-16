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
#define foreach(itr,c) for(typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}

typedef long long ll;

int main(){
  int i,j,k;
  ll n,tmp;

  while(1){
    cin >> n; if(n == 0) break;

    ll acnt = 0;
    REP(i,1,n+1){
      tmp = i;
      while(tmp % 2 == 0 && tmp){ tmp /= 2; acnt++;}
    }

    ll bcnt = 0;
    REP(i,1,n+1){
      tmp = i;
      while(tmp % 5 == 0 && tmp){ tmp /= 5; bcnt++;}
    }

    if(acnt >= bcnt) cout << bcnt << endl;
    else cout << "0" << endl;
  }

  return 0;
}