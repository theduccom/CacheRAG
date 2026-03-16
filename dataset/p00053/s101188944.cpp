#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define REP(i,a,b) for((i)=(a);(i)<(int)(b);(i)++)
#define rep(i,n) REP(i,0,n)
#define foreach(itr,c) for(typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

template<class T> inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}

typedef long long ll;
vector<bool> isprime(1000000,true);

void sieve(int n){
  int i,j;
  isprime[0] = isprime[1] = false;
  for(i = 2; i*i <= n; i++) if(isprime[i]){
    for(j = 2*i; j <= n; j += i) isprime[j] = false;
  }
}

int main(){
  int i,j,k,n;
  int in;

  sieve(1000000);

  while(1){
    cin >> in; if(in == 0) break;
    ll sum = 0;
    int cnt = 0;
    for(i = 0; cnt < in; i++) if(isprime[i]){ cnt++; sum += i;}
    cout << sum << endl;
  }

  return 0;
}