#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while (cin >> n, n){
    bool f = false;
    map<int, long> mil;
    vector<int> vi;
    int e, p, q;
    for (int i = 0; i < n; i++){
      cin >> e >> p >> q;
      if (mil[e] == 0) vi.push_back(e);
      mil[e] += p * q;
    }

    int m = vi.size();
    for (int i = 0; i < m; i++){
      if (mil[vi[i]] >= 1000000) {
        cout << vi[i] << "\n";
        f = true;
      }
    }
    if (!f) cout << "NA\n";
  }
}