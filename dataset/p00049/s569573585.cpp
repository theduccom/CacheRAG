#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <functional>
#include <queue>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
  int x, A = 0, B = 0, AB = 0, O = 0;
  char b[8];
  while (scanf("%d,%s", &x, b) == 2) {
    if (b[0] == 'A' && b[1] == 'B')
      AB++;
    else if (b[0] == 'A')
      A++;
    else if (b[0] == 'B')
      B++;
    else
      O++;
  }
  printf("%d\n%d\n%d\n%d\n", A, B, AB, O);
  return 0;
}