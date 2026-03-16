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

typedef long long ll;
template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}
inline ll toll(string s) {ll v; istringstream sin(s);sin>>v;return v;}


int main(){
  int i,j,k,n;
  string in;

  cin >> n;
  while(n--){
    cin >> in;

    sort(in.begin(),in.end());
    ll mini = toll(in);
    reverse(in.begin(),in.end());
    ll maxi = toll(in);

    cout << maxi - mini << endl;
  }

  return 0;
}