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
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int main(){
  int mapping[256];
  mapping['I'] = 1;
  mapping['V'] = 5;
  mapping['X'] = 10;
  mapping['L'] = 50;
  mapping['C'] = 100;
  mapping['D'] = 500;
  mapping['M'] = 1000;
  string str;
  while(cin >> str){
    int n = str.size();
    vector<int> v(n);
    int ans = 0;
    REP(i,n) v[i] = mapping[str[i]];
    REP(i,n){
      if(i != n-1){
	if(v[i] < v[i+1]) ans -= v[i];
	else ans += v[i];
      }else{
	ans += v[i];
      }
    }
    cout << ans << endl;
  }
  return 0;
}