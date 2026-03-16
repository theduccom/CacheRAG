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
typedef pair< vector<int>, int> P;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
vector<int> e(8);
bool a[16777216];
int vtoi(vector<int> vec){
  int ret = 0;
  REP(i,vec.size()){
    ret += vec[i]*pow(8,i);
  }
  return ret;
}
int main(void){
  REP(i,8)e[i] = i;
  memset(a,0,sizeof(a));
  queue<P> que;
  que.push(P(e,0));
  map< const string , int > data;
  while(!que.empty()){
    P nq = que.front();
    que.pop();
    vector<int> n = nq.first;
    string array;
    REP(i,8) array += '0'+n[i];
    int time = nq.second;
    data[array] = time;
    a[ vtoi(n) ] = true;
    int zeroi = -1;
    REP(i,8)if(n[i]==0) zeroi = i;
    if(zeroi<4){
      vector<int> tmp = n;
      swap(tmp[zeroi],tmp[zeroi+4]);
      if(!a[vtoi(tmp)])
        que.push(P(tmp,time+1));
    }
    if(zeroi>3){
      vector<int> tmp = n;
      swap(tmp[zeroi],tmp[zeroi-4]);
      if(!a[vtoi(tmp)])
        que.push(P(tmp,time+1));
    }
    if(zeroi!=0&&zeroi!=4){
      vector<int> tmp = n;
      swap(tmp[zeroi],tmp[zeroi-1]);
      if(!a[vtoi(tmp)])
        que.push(P(tmp,time+1));
    }
    if(zeroi!=3&&zeroi!=7){
      vector<int> tmp = n;
      swap(tmp[zeroi],tmp[zeroi+1]);
      if(!a[vtoi(tmp)])
        que.push(P(tmp,time+1));
    }
  }
  vector<int> in(8);
  while(cin>>in[0]){
    REP(i,7)cin>>in[i+1];
    string ary;
    REP(i,8) ary += '0' + in[i];
    cout<<data[ary]<<endl;
  }
  return 0;
}