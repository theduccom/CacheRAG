#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  bool p[3] = { true, false, false };
  char x, y;
  while (scanf("%c,%c\n", &x, &y) == 2)
    swap(p[x-'A'], p[y-'A']);
  if (p[0])
    puts("A");
  else if (p[1])
    puts("B");
  else
    puts("C");
  return 0;
}