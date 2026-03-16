/* {{{ Shinobu kawaii */
/*
  ______   __        _                  __                 
.' ____ \ [  |      (_)                [  |                
| (___ \_| | |--.   __   _ .--.   .--.  | |.--.   __   _   
 _.____`.  | .-. | [  | [ `.-. |/ .'`\ \| '/'`\ \[  | | |  
| \____) | | | | |  | |  | | | || \__. ||  \__/ | | \_/ |, 
 \______.'[___]|__][___][___||__]'.__.'[__;.__.'  '.__.'_/ 
                                                           
*/
/* }}} */

#include <bits/stdc++.h>
using namespace std;

// #define int long long

/* cpp template {{{ */

/* short */
#define pb push_back
#define mp make_pair
#define print(x) cout << x << '\n'
#define Fi first
#define Se second

/* REPmacro */
#define REPS(i, a, n) for (int i = (a); i < (n); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define RREP(i, n) for (int i = 1; i <= (n); i++)
#define DEPS(i, a, n) for (int i = (a); i >= n; i--)
#define DEP(i, n) for (int i = (n); i >= 0; i--)

/* typedef */
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;

/* const */
const int INF = 999999999;
const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

/* func */
inline bool is_uruu(int y) {return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));}
inline bool inside(int y, int x, int H, int W) {return (y >= 0 && x >= 0 && y < H && x < W);}

/* }}} */

string field[24];

void dfs(int y, int x)
{
  field[y][x] = '0';
  REP(i, 4){
    int ny = y + dy[i], nx = x + dx[i];
    if (!inside(nx, ny, 12, 12)) continue;
    if (field[ny][nx] != '1') continue;
    dfs(ny, nx);
  }
}

signed main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  while (cin >> field[0]){
    int ans = 0;
    REP(i, 11){
      cin >> field[i + 1];
    }
    REP(i, 12){
      REP(j, 12){
        if (field[j][i] == '1'){
          dfs(j, i);
          ans++;
        }
      }
    }
    print(ans);
  }
  
  return (0);
}