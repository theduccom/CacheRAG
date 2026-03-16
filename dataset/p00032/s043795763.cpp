#include <cstdio>
using namespace std;

int a, b, c;
int num_rect;
int num_rhombus;

int main() {
  while (1) {
    if (scanf("%d,%d,%d", &a, &b, &c) != 3) break;
    if (a*a+b*b == c*c) num_rect++;
    if (a == b) num_rhombus++;
  }

  printf("%d\n", num_rect);
  printf("%d\n", num_rhombus);
}