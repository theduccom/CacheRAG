#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<bitset>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;

#define PI 3.141592653589793238462643383279
#define mod 1000000007LL
#define rep(i, n) for(i = 0;i < n;++i)
#define rep1(i, n) for(i = 1;i < n;++i)
#define per(i, n) for(i = n - 1;i > -1;--i)
#define int(x) int x; scanf("%d",&x)
#define int2(x, y) int x, y; scanf("%d%d",&x, &y)
#define int3(x, y, z) int x, y, z; scanf("%d%d%d",&x, &y, &z)
#define int4(v, x, y, z) int v, x, y, z; scanf("%d%d%d%d", &v, &x, &y, &z)
#define int5(v, w, x, y, z) int v, w, x, y, z; scanf("%d%d%d%d%d", &v, &w, &x, &y, &z)
#define ll2(x, y) ll x, y; cin >> x >> y;
#define scn(n, a) rep(i, n)cin >> a[i]
#define sc2n(n, a, b) rep(i, n)cin >> a[i] >> b[i]
#define pri(x) cout << (x) << "\n"
#define pri2(x, y) cout << (x) << " " << (y) << "\n"
#define pri3(x, y, z) cout << (x) << " " << (y) << " " << (z) << "\n"
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define endl "\n"
#define kabe puts("---------------------------")
#define kara puts("")
#define debug(x) cout << " --- " << (x) << "\n"
#define debug2(x, y) cout << " --- " << (x) << " " << (y) << "\n"
#define debug3(x, y, z) cout << " --- " << (x) << " " << (y) << " " << (z) << "\n"
#define X first
#define Y second
#define eps 0.0001
#define prid(x) printf("%.15lf\n", x)

int a[8];
string s, gl = "01234567";
int d[4] = {1, -4, 4, -1};
map<string, int> S;

int solve(){
  queue< pair<string, int> > Q;
  Q.push(mp("01234567", 0));
  S.insert(mp("01234567", 0));

  for(int i, j, k;!Q.empty();){
    pair<string, int> tmp = Q.front();
    Q.pop();

    rep(i, 8)if(tmp.X[i] == '0')break;
    rep(k, 4)if(0 <= i + d[k] && i + d[k] < 8){
      if(i == 3 && i + d[k] == 4)continue;
      if(i == 4 && i + d[k] == 3)continue;
      swap(tmp.X[i], tmp.X[i + d[k]]);
      if(S.find(tmp.X) == S.end()){
        ++tmp.Y;
        Q.push(tmp); S.insert(tmp);
        --tmp.Y;
      }
      swap(tmp.X[i], tmp.X[i + d[k]]);
    }
  }
  return -1;
}

signed main(void){
  int i, j;
  s.resize(8);
  solve();
  for(int testcase = 0;testcase >= 0;testcase++){
    rep(i, 8){
      if(scanf("%d", &a[i]) == -1)return 0;
      s[i] = (char)('0' + a[i]);
    }
    pri(S.at(s));


//*/

//*/ break;
  }
  return 0;
}