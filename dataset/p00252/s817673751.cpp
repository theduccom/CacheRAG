#include <stdio.h>

int main(void) {
  int i, j, k, a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if((a && b && !c) || (!a && !b && c)) printf("Open\n");
  else printf("Close\n");
  return 0;
}
