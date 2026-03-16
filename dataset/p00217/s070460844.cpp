#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef vector<int> vi;
typedef vector<string> vs;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

  int n;

  while(true) {
    cin >> n;
    if(n == 0) break;

    int num, max = -1;
    rep(i,0,n) {
      int id,d1,d2;
      cin >> id >> d1 >> d2;
      if(max < d1+d2) {
        max = d1+d2;
        num = id;
      }
    }
    cout << num << " " << max << endl;
  }

	return 0;
}