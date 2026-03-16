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
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
#define ll long long

ll data[4010];
bool out[4010];

int main(){
  int i,j,k,n;
  ll a, b;
  int id;

  while(scanf("%d",&n)){
    if(n == 0) break;
    vector<int> ids;
    bool f = false;

    rep(i,4010) data[i] = 0;
    rep(i,4010) out[i] = false;

    while(n--){
      scanf("%d %lld %lld",&id,&a,&b);

      ids.push_back(id);
      data[id] += a * b;
      if(data[id] >= 1000000LL) out[id] = true;
    }

//    rep(i,ids.size()) cout << "debug " << ids[i] << endl;
    rep(i,ids.size()) if(out[ids[i]]){
      printf("%d\n",ids[i]);
      out[ids[i]] = false;
      f = true;
    }

    if(!f) puts("NA");
  }

  return 0;
}