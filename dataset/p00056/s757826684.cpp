#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'

typedef long long ll;
typedef long double lb;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;

inline bool inside(int y, int x, int H, int W)
{ 
  return (y >= 0 && x >= 0 && y < H && x < W);
}

inline int in() {int x; std::cin >> x; return x;}

const ll mod = 1e9 + 7;
const ll inf = 1e9 + 9;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
const int dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

bool p[50001] = {false};

void prime()
{
  p[0] = p[1] = true;
  for (int i = 2; i * i < 50000; i++){
    if (!p[i]){
      for (int j = 2 * i; j <= 50000; j += i){
        p[j] = true;
      }
    }
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  prime();

  int n;
  int cnt;

  while (cin >> n, n){
    cnt = 0;
    if (n % 2 == 1){
      if (!p[n - 2]) cnt = 1;
      else cnt = 0;
    }

    else {
      for (int i = 0; i <= n / 2; i++){
        if (!p[i] && !p[n - i]) cnt++;
      }
    }

    cout << cnt << endl;
  }
  return (0);
}