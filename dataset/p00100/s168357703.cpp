#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  for (;;) {
    int n;
    cin >> n;
    if (!n) return 0;
    pair<int, pair<int, long long> > es[4001];
    for (int i = 1; i <= 4000; i++) {
      es[i].first = 5000;
      es[i].second.first = i;
      es[i].second.second = 0;
    }
    for (int i = 0; i < n; i++) {
      int id;
      long long v, c;
      cin >> id >> v >> c;
      es[id].first = min(es[id].first, i);
      es[id].second.second += v * c;
    }
    sort(es+1, es+4001);
    bool f = false;
    for (int i = 1; i <= 4000; i++)
      if (es[i].second.second >= 1000000) {
        f = true;
        cout << es[i].second.first << endl;
      }
    if (!f)
      cout << "NA" << endl;
  }
}