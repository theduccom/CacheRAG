#include <bits/stdc++.h>
using namespace std;
  
// #define int long long
#define pb push_back
  
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
 
template <class X> void print(X Target){ cout << Target << '\n'; }

const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

int w, h;
int xs, ys, xg, yg;
int mp[128][128];
bool field[128][128];

void dfs(int y, int x, int color)
{
  if (x < 1 || x > w || y < 1 || y > h) return;
  if (field[y][x]) return;
  field[y][x] = true;
  for (int i = 0; i < 4; i++){
    if (mp[y + dy[i]][x + dx[i]] == color){
      dfs(y + dy[i], x + dx[i], color);
    }
  }
}

signed main()
{
  ios::sync_with_stdio(false);
  int n;

  while (cin >> w >> h, w || h){
    memset(field, false, sizeof(field));
    memset(mp, 0, sizeof(mp));
    cin >> xs >> ys >> xg >> yg >> n;
    for (int i = 0; i < n; i++){
      int c, d, x, y;
      cin >> c >> d >> x >> y;
      if (d){
        for (int j = 0; j < 4; j++){
          for (int k = 0; k < 2; k++){
            mp[y + j][x + k] = c;
          }
        }
      }
      else {
        for (int j = 0; j < 2; j++){
          for (int k = 0; k < 4; k++){
            mp[y + j][x + k] = c;
          }
        }
      }
    }
    dfs(ys, xs, mp[ys][xs]);
    (field[yg][xg]) ? print("OK") : print("NG");
  }

  return (0);
}