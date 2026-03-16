#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int const N = 51000;
  vector<int> prime(N,1);
  prime[0] = prime[1] = 0;
  for(int i=0; i*i<N; i++)
    if (prime[i])
      for(int j=i*2; j<N; j+=i)
        prime[j] = 0;
  vector<int> p;
  for (int i=0; i<N; i++)
    if (prime[i])
      p.push_back(i);
  int n;
  while(cin>>n) {
    vector<int>::iterator it = upper_bound(ALL(p),n);
    int f = 1;
    if (*(it-1) == n) f++;
    printf("%d %d\n",*(it-f), *it);
  }
}