#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define pb push_back

const int MAX_N = 1000000;
int n;
bool sieve[MAX_N];
vector<int> pl;

void solve() {
  ll res = 0;
  for (int i = 0; i < n; i += 1) {
		//cout<<pl[i]<<endl;
		res += pl[i];
  }
  cout<<res<<endl;
}

int main (int argc, char const* argv[]) {
  // set sieve
  memset(sieve, true, sizeof sieve);
  for(int i=4;i<MAX_N;i+=2) sieve[i] = false;
  pl.pb(2);

  for(int i=3;i<MAX_N;i+=2)
  if (sieve[i]) {
    pl.pb(i);
    for(int j=i+i;j<MAX_N;j+=i)
    if (sieve[j])
    sieve[j] = false;
  }
  
  // solve 
  while (cin>>n, n) {
    solve();
  }
  
  return 0;
}