#include <iostream>
#include <cstring>
#include <string>

#define loop for (;;)
#define repeat(i, n) for (int i = 0; i < (n); i++)

using namespace std;

int main() {
  loop {
    int H, W;
    cin >> H >> W;
    if (!H && !W) return 0;
    string room[H];
    bool visited[H][W];
    memset(visited, 0, sizeof visited);
    int x = 0, y = 0;
    repeat(i, H)
      cin >> room[i];
    for (bool finish = false; !finish;) {
      if (visited[y][x]) {
        cout << "LOOP" << endl;
        finish = true;
      } else
        visited[y][x] = true;
      switch (room[y][x]) {
      case '>': x++; break;
      case '<': x--; break;
      case '^': y--; break;
      case 'v': y++; break;
      case '.':
        cout << x << ' ' << y << endl;
        finish = true;
        break;
      default: break;
      }
    }
  }
}