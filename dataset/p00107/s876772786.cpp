#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

double f(int a, int b){ return sqrt(a*a + b*b) / 2.0; }

int main(){
  int x,y,z;
  while(cin>>x>>y>>z, x+y+z){
    double m = 1e10;
    m = min(m, f(x,y));
    m = min(m, f(y,z));
    m = min(m, f(x,z));
    //printf("m = %f\n",m);
    int n; cin>>n;
    while(n --> 0){
      double r; cin >> r;
      puts(r > m ? "OK" : "NA");
    }
  }
  return 0;
}