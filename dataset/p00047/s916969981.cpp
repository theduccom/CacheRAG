#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
int INF = 1e9+7;
#define rep(i, n) for(auto i=0;i<(n);i++)

int main(int argc, char **argv)
{
  vi v(3);
  v[0] = 1;
  char x, y, c;
  while (cin >> x >> c >> y) {
    swap(v[x-'A'], v[y-'A']);
  }
  rep (i, 3) {
    if (v[i])
      cout << char('A'+i) << endl;
  }
  return 0;
}