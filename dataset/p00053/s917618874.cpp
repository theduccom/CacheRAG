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

#define MAX 1000000
int s[MAX];

int main(){
  int n;
  int cnt = 1;
  vector<bool> isP(MAX,true);
  for(int i=2; i<MAX; i++){
    if(isP[i]){
      s[cnt] = s[cnt-1] + i; cnt++;
      for(int j=i+i; j<MAX; j+=i)
	isP[j] = false;
    }
  }
  while(cin>>n, n)
    cout << s[n] << endl;

  return 0;
}