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
  int a[3] = {1,0,0};
  string str;
  while(cin>>str){
    int p1 = str[0] - 'A';
    int p2 = str[2] - 'A';
    swap(a[p1], a[p2]);
  }
  REP(i,3) if(a[i]==1) printf("%c\n",i+'A');
  return 0;
}