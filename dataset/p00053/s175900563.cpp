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
  vector<int> table(1000000,1);
  table[0]=table[1]=0;
  for(int i=2; i*i<1000000; i++)
    if (table[i])
      for (int j=i*2; j<1000000; j+=i)
        table[j] = 0;
  vector<int> p;
  REP(i,table.size())
    if (table[i]) 
      p.push_back(i);
  vector<int> sp;
  sp.push_back(0);
  REP(i,10001) {
    sp.push_back(sp[i]+p[i]);
  }
  int n;
  while(cin>>n,n) {
    cout << sp[n] << endl;
  }
}