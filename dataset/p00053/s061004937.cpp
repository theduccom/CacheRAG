#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
int inf = 1000000000;

vector<bool> isPrime(int n){
  vector<bool> p(n+1, true);
  p[0] = false;
  p[1] = false;
  for(int i=2; i<=sqrt(n); i++){
    if( p[i] == false ) continue;
    for(int j=i+i; j<n; j+=i){
      p[j] = false;
    }
  }
  return p;
}

int main(void) {

  vector<bool> p = isPrime(10000000);

  int n;
  while(cin >> n){
    if( n == 0 ) break;
    int cnt = 0;
    long long int sum = 0;
    for(int i=0; i<p.size(); i++){
      if( p[i] ){
        cnt++;
        sum += i;
      }
      if( cnt == n ){
        cout << sum << endl;
        break;
      }
    }
  }

  return 0;
}

// EOF