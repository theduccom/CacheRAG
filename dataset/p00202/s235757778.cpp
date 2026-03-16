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
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <sstream>
#include <cassert>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;
typedef pair<int,int> PI;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
#define mp make_pair
#define pb push_back
#define f first
#define s second


bool p[1000001];


main(){
  rep(i,1000001)p[i]=true;

  p[0]=p[1]=false;
  for(int i=2;i<=1000000;i++){
    if(p[i]==false)continue;
    for(int j=2*i;j<=1000000;j+=i)p[j]=false;
  }

  int n,x;
  while(cin>>n>>x,n|x){
    int mo[n];
    rep(i,n)cin>>mo[i];
    bool can[x+1];
    memset(can,0,sizeof(can));

    can[0]=1;
    rep(i,x+1){
      if(can[i]){
        rep(j,n){
          if(i+mo[j]<=x)can[i+mo[j]]=1;
        }
      }
    }

    while(true){
      if(can[x] && p[x]){
        cout<<x<<endl;
        break;
      }
      x--;
      if(x<2){
        cout<<"NA"<<endl;
        break;
      }
    }
  }
}