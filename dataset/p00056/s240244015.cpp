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

  vector<bool> p = isPrime(50000);
  vector<int> a;
  for(int i=0; i<p.size(); i++){
    if( p[i] ) a.push_back(i);
  }

  int n;
  while(cin >> n){
    if( n == 0 ) break;
    if( n % 2 == 1 ){
      if( p[n-2] ) cout << 1 << endl;
      else cout << 0 << endl;
    }else{
      int cnt = 0;
      for(int i=0; i<a.size(); i++){
        if( a[i] > n - a[i] ) break;
        // if( p[ n - a[i] ] ) cerr << a[i] << endl;
        if( p[ n - a[i] ] ) cnt++;
      }
      cout << cnt << endl;
    }
  }

  return 0;
}

// EOF