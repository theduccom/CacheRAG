#include <iostream>
using namespace std;
typedef unsigned long long ull;
int main() {
  ull map, shape[] = {0x303, 0x1010101, 0xf, 0x10302, 0x603, 0x20301, 0x306};
  char c, ans;
  int i, j;
  while (cin >> c) {
    map = c - '0';
    for (i = 1; i < 64; i++) {
      cin >> c;
      if (c == '1') map |= (ull) 1 << i;
    }
    for (i = 0; i < 64; i++)
      for (j = 0; j < 7; j++)
        if (((map >> i) & shape[j]) == shape[j]) {
          ans = j + 'A';
          goto p;
        }
    p:
    cout << ans << endl;
  }
}