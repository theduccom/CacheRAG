#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pq priority_queue
#define debug(x) cerr << #x << ": " << x << endl;
#define line() cerr << "---------------" << endl;

int main() {
   int n, m;
   while (cin >> n >> m, n) {
      vector<int> v(n);
      int sum = 0;
      for (int &x : v) {
         cin >> x;
         sum += x;
      }
      sort(v.begin(), v.end(), greater<int>());
      for (int i = m-1; i < v.size(); i+=m) {
         sum -= v[i];
      }
      cout << sum << endl;
   }

   return 0;
}
