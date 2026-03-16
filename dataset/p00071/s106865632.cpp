#include <iostream>

using namespace std;

void hoge(char **map, int x, int y) {
  for (int x2 = x - 3; x2 <= x + 3; ++x2) {
    if (0 <= x2 && x2 <= 7 && map[x2][y] == '1') {
      map[x2][y] = '0';
      hoge(map, x2, y);
    }
  }
  for (int y2 = y - 3; y2 <= y + 3; ++y2) {
    if (0 <= y2 && y2 <= 7 && map[x][y2] == '1') {
      map[x][y2] = '0';
      hoge(map, x, y2);
    }
  }
}

int main() {
  int n;
  cin >> n;

  for (int d = 0; d < n; ++d) {
    char map[8][8];
    for (int x = 0; x < 8; ++x)
      for (int y = 0; y < 8; ++y)
        cin >> map[x][y];

    int ix, iy;
    cin >> ix >> iy;

    char *map2[8];
    for (int i = 0; i < 8; ++i)
      map2[i] = map[i];
    hoge(map2, iy-1, ix-1);

    cout << "Data " << d + 1 << ":" << endl;
    for (auto &s : map) {
      for (auto &v : s)
        cout << v;
      cout << endl;
    }
  }
}
