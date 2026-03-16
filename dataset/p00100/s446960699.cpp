#include <iostream>
#include <map>
#include <vector>
using namespace std;

main() {
  int n;
  while((cin >> n) && n) {
    map<int, unsigned long long> m;
    vector<int> id;
    for(int i = 0; i < n; ++i) {
      int r, p, q;
      cin >> r >> p >> q;
      if(!m[r]) id.push_back(r);
      m[r] += p*q;
    }
    bool flag = true;
    for(int i = 0; i < id.size(); ++i) {
      if(m[id[i]] >= 1000000) {
	cout << id[i] << endl;
	flag = false;
      }
    }
    if(flag) cout << "NA" << endl;
  }
}