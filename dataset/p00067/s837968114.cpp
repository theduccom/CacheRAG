#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
#define pb push_back
#define sz(c) int((c).size())

vs field;

vi dx = {0, -1, 0, 1};
vi dy = {-1, 0, 1, 0};

void dfs(int x, int y)
{
  field[x][y] = '0';
  for (int i = 0; i < sz(dx); i++) {
    int nx = x+dx[i], ny = y+dy[i];
    if (0 <= nx && nx < 12 && 0 <= ny && ny < 12 && field[nx][ny] == '1')
      dfs(nx, ny);
  }
}

int islands()
{
  int res = 0;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      if (field[i][j] == '1') {
        res++;
        dfs(i, j);
      }
    }
  }
  return res;
}

int main(int argc, char **argv)
{
  string s;
  while (getline(cin, s)) {
    if (sz(s) == 0) {
      cout << islands() << endl;
      field.clear();
    } else {
      field.pb(s);
    }
  }
  cout << islands() << endl;
  return 0;
}