#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int c[5];
  char cm;
  while (cin >> c[0] >> cm >> c[1] >> cm >> c[2] >> cm >> c[3] >> cm >> c[4]) {
    sort(c, c + 5);
    int same = 0, two = 0, t = 1, i;
    for (i = 0; i < 4; i++)
      if (c[i] == c[i + 1]) {
        t++;
        if (t == 2) two++;
        same = max(same, t);
      }
      else t = 1;
    bool full = false;
    if (c[0] == c[1] && c[3] == c[4] && (c[1] == c[2] || c[2] == c[3])) full =
      true;
    bool st = true;
    if (c[0] == 1 && c[1] == 10) {
      for (i = 1; i < 4; i++)
        if (c[i] + 1 != c[i + 1]) st = false;
    }
    else {
      for (i = 0; i < 4; i++)
        if (c[i] + 1 != c[i + 1]) st = false;
    }
    cout
      << ((same == 4) ? "four card" : (full) ? "full house" :
          (st) ? "straight" : (same == 3) ? "three card" :
          (same == 2) ? ((two == 2) ? "two pair" : "one pair") : "null")
      << endl;
  }
}