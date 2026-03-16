#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
#define sz(c) int((c).size())

typedef vector<vi> vvi;

const int fsize = 8;

int sx, sy;
vvi f(fsize+1, vi(fsize+1, 0));

vi dx = {-3, -2, -1,  1,  2,  3,  0,  0,  0,  0,  0,  0};
vi dy = { 0,  0,  0,  0,  0,  0, -3, -2, -1,  1,  2,  3};

void dfs(int x, int y)
{
  f[y][x] = 0;
  for (int i = 0; i < sz(dx); i++) {
    int nx = x + dx[i], ny = y + dy[i];
    if (0 < nx && nx <= fsize && 0 < ny && ny <= fsize && f[ny][nx])
      dfs(nx, ny);
  }
}

void BombsChain()
{
  dfs(sx, sy);
  for (int y = 1; y <= fsize; y++) {
    for (int x = 1; x <= fsize; x++) {
      cout << f[y][x];
    }
    cout << endl;
  }
}

int main(int argc, char **argv)
{
  int cnr;
  char c;
  cin >> cnr;
  for (int i = 1; i <= cnr; i++) {
    cin.ignore(); // \n
    cin.ignore(); // \n
    for (int y = 1; y <= fsize; y++) {
      for (int x = 1; x <= fsize; x++) {
        cin.get(c);
        f[y][x] = (c == '1');
      }
      cin.ignore();
    }
    cin >> sx >> sy;
    cout << "Data " << i << ":" << endl;
    BombsChain();
  }

  return 0;
}