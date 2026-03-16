#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<map>

#define f first
#define s second

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int main(){
  int a; char b; string c;
  int cnt[4] = {0};
  map<string,int> m;
  m["A"]  = 0;
  m["B"]  = 1;
  m["AB"] = 2;
  m["O"]  = 3;
  while(cin>>a>>b>>c){
    cnt[m[c]]++;
  }
  REP(i,4) cout<<cnt[i]<<endl;
  return 0;
}