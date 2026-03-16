#include <iostream>
#include <map>
#include <vector>
#define int long long int
using namespace std;
signed main() {
  bool f;
  vector<pair<int, int> > v;
  int n, a, b, c;
  while (cin >> n && n > 0) {
    v.clear();
    for (int i = 0; i < n; i++) {
      cin >> a >> b >> c;
      f = 0;
      for (int j = 0; j < v.size(); j++) {
        if (v[j].first == a) {
          v[j].second += b * c;
          f = 1;
        }
      }
      if (!f) {
        v.push_back(pair<int, int>(a, b * c));
      }
    }
    f = 0;
    for (int i = 0; i < v.size(); i++) {
      if (v[i].second >= 1000000) {
        cout << v[i].first << endl;
        f = 1;
      }
    }
    if (!f) {
      cout << "NA" << endl;
    }
  }
  return 0;
}