#include <iostream>
#include <algorithm>
using namespace std;
typedef long long lli;

int main() {
  int n;
  while(cin >> n && n) {
    int cnt = 0;
    lli sum[4001];
    fill(sum, sum+4001, 0LL);
    for(int i = 0; i < n; ++i) {
      lli id, e, num;
      cin >> id >> e >> num;
      if(sum[id] != -1) {
        sum[id] += e * num;
        if(sum[id] >= 1000000LL) {
          ++cnt;
          sum[id] = -1;
          cout << id << endl;
        }
      }
    }
    if(!cnt) cout << "NA" << endl;
  }
  return 0;
}