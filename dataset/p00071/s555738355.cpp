#include <iostream>

using namespace std;

char p[8][10];

void explode(int x, int y) {
  if (x < 0 || x >= 8 || y < 0 || y >= 8 || p[y][x] == '0')
    return;
  p[y][x] = '0';
  for (int i = 1; i <= 3; i++) {
    explode(x, y+i);
    explode(x, y-i);
    explode(x+i, y);
    explode(x-i, y);
  }
}

int main() {
  int N;
  cin >> N;
  for (int I = 1; I <= N; I++) {
    for (int i = 0; i < 8; i++)
      cin >> p[i];
    int x, y;
    cin >> x >> y;
    explode(x-1, y-1);
    cout << "Data " << I << ':' << endl;
    for (int i = 0; i < 8; i++)
      cout << p[i] << endl;
  }
  return 0;
}