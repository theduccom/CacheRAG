#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <complex>
using namespace std;

typedef long long ll;

#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep(i,n) REP(i,0,n)

bool isPrime(int x){
  if(x == 0 || x == 1) return false;

  for(int i = 2; i * i <= x; i++){
    if(x % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;

  while(cin >> n, n){
    for(int i = n; ; i--){
      if(isPrime(i) && isPrime(i - 2)){
        cout << i - 2 << " " << i << endl;
        break;
      }
    }
  }
}