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

int conv(char c) {
  switch (c) {
  case 'I':
    return 1;
  case 'V':
    return 5;
  case 'X':
    return 10;
  case 'L':
    return 50;
  case 'C':
    return 100;
  case 'D':
    return 500;
  case 'M':
    return 1000;
  default:
    return 0;
  }
}

int main() {
  char s[128];
  while (scanf("%s", s) == 1) {
    int r = 0;
    for (char *c = s; *c; c++)
      if (conv(*c) < conv(*(c+1)))
        r -= conv(*c);
      else
        r += conv(*c);
    printf("%d\n", r);
  }
  return 0;
}