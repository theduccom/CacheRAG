#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  char cur = 'A';
  char x, y;
  while (scanf("%c,%c ", &x, &y) == 2) {
    if (x == cur) {
      cur = y;
    } else if (y == cur) {
      cur = x;
    }
  }
  printf("%c\n", cur);
}