#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)n;++i)

using namespace std;

int main() {
  while(1){
    int n;
    cin>>n;
    if(!n)break;
    vector<int64_t> m(4001);
    vector<int> order;
    set<int> already;
    REP(i,n){
      int64_t no, p, num;
      cin>>no>>p>>num;
      if (!already.count(no)) {
        order.push_back(no);
        already.insert(no);
      }
      m[no] += p * num;
    }
    int cnt = 0;
    for(int no:order) {
      if (m[no] >= 1000000) {
        ++cnt;
        cout << no << endl;
      }
    }
    if (!cnt)
      cout << "NA" << endl;
  }
  return 0;
}