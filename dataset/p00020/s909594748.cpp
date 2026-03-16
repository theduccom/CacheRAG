#include <stdio.h>
#include <string.h>

int main(void) {
  char a[220];
  int i;
  fgets(a, sizeof(a), stdin);
  for(i = 0; i < strlen(a); ++i) {
    if(a[i] >= 'a' && a[i] <= 'z') a[i] += 'A' - 'a';
    printf("%c", a[i]);
  }
  return 0;
}
