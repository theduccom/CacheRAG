#include <cstdio>

int main()
{
  int a, b, c, c1, c2;
  c1 = c2 = 0;
  while (scanf("%d,%d,%d", &a, &b, &c) != EOF){
    if (c * c - (a * a + b * b) == 0){
      c1++;
    }
    if (a == b){
      c2++;
    }
  }
  printf("%d\n%d\n", c1, c2);

  return 0;
}