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
  int n; cin>>n;
  while(n-->0){
    string s;
    int h,l;
    cin >> s;
    sort(s.begin(),s.end());
    sscanf(s.c_str(),"%d",&l);
    sort(s.rbegin(),s.rend());
    sscanf(s.c_str(),"%d",&h);
    cout << h - l << endl;
  }
  return 0;
}