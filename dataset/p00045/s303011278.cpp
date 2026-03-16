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
  int n = 0;
  int sum = 0;
  int num = 0;
  int a,b;
  char c;
  while(cin>>a>>c>>b){
    n++;
    sum += a*b;
    num += b;
  }
  cout << sum << endl;
  cout << floor((double)num/n+0.5) << endl;
  return 0;
}