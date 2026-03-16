#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1000000;
const int MMAX = 100;

int N, M;
int c[MMAX][MMAX];
int t[MMAX][MMAX];

bool input_map() {
  cin >> N >> M;
  if (!N && !M) {
    return false;
  }
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < M; ++j) {
      c[i][j] = INF;
      t[i][j] = INF;
    }
    c[i][i] = 0;
  }
  for (int i = 0; i < N; ++i) {
    int x, y, cc, tt;
    cin >> x >> y >> cc >> tt;
    --x, --y;
    c[x][y] = cc;
    c[y][x] = cc;
    t[x][y] = tt;
    t[y][x] = tt;
  }

  return true;
}

void prepare() {
  for (int k = 0; k < M; ++k) {
    for (int i = 0; i < M; ++i) {
      for (int j = 0; j < M; ++j) {
        c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
        t[i][j] = min(t[i][j], t[i][k] + t[k][j]);
      }
    }
  }
}

int main() {
  while (input_map()) {
    prepare();
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
      int p, q, r;
      cin >> p >> q >> r;
      --p, --q;
      if (r) {
        cout << t[p][q] << endl;
      } else {
        cout << c[p][q] << endl;
      }
    }
  }
  return 0;
}