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
bool mem[1000001];
bool unprime[1000001];
int main(void){
  int n,x;
  for(int i=2; i<1000001; i++){
    if(!unprime[i]){
      for(int k=2; i*k<1000001; k++){
        unprime[i*k] = true;
      }
    }
  }
  while(cin>>n>>x){
    if(n==0) break;
    memset(mem,0,sizeof(mem));
    mem[0] = true;
    REP(i,n){
      int money;
      cin>>money;
      for(int j=0; j+money<=x; j++){
        if(mem[j]) mem[j+money] = true;
      }
    }
    for(int i = x; i>=1; i--){
      if(i==1){
        cout<<"NA"<<endl;
        break;
      }else if(!unprime[i]&&mem[i]){
        cout<<i<<endl;
        break;
      }
    }
  }
  return 0;
}