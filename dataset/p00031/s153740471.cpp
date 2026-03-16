#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int x;
  while(cin>>x) {
    int a=0;
    for (int i=0; x>>i; i++) {
      if (1&(x>>i)) {
        if (a) cout << " ";
        cout << (1<<i);
        a=1;
      }
    }
    cout << endl;
  }
}