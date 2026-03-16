#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(c, i) for(auto i = (c).begin(); i != (c).end(); i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

int main(int argc, char **argv)
{
  double minv, maxv, tmp;
  cin >> tmp;
  maxv = minv = tmp;
  while (cin >> tmp) {
   maxv = max(tmp, maxv);
   minv = min(tmp, minv);
  }
  cout << (maxv - minv) << endl;
  return 0;
}