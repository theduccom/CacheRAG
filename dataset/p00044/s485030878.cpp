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

#define MAX (50100)
int main(){
  vector<bool> isP(MAX,true);
  isP[0] = isP[1] = false;
  for(int i=2; i*i<MAX; i++){
    if(isP[i]){
      for(int j=i+i; j<MAX; j+=i){
	isP[j] = false;
      }
    }
  }
  int n;
  while(cin>>n){
    for(int i = n-1; ; i--){
      if(isP[i]){
	cout << i;
	break;
      }
    }
    cout << " ";
    for(int i = n+1; ; i++){
      if(isP[i]){
	cout << i;
	break;
      }
    }
    cout << endl;
  }
  return 0;
}