#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <cstring>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  set<pair<int, int> > ranking;
  while (cin >> n, n) {
    int p, d1, d2;
    for (int i = 0; i < n; i++) {
      cin >> p >> d1 >> d2;
      ranking.insert(pair<int, int>(d1 + d2, p));
    }
    cout << ranking.rbegin()->second << ' ';
    cout << ranking.rbegin()->first << endl;
    ranking.clear();
  }
  return 0;
}