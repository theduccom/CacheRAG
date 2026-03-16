#include <stdio.h>
#include <string.h>

int main(void) {
  char c[1011];
  int i;
  fgets(c, 1001, stdin);
  for(i = 0; i < strlen(c); ++i) {
    if(c[i] == 'a' && c[i + 1] == 'p' && c[i + 2] == 'p' && c[i + 3] == 'l' && c[i + 4] == 'e') 
      c[i] = 'p', c[i + 1] = 'e', c[i + 2] = 'a', c[i + 3] = 'c', c[i + 4] = 'h', i += 4;
    if(c[i] == 'p'&& c[i + 1] == 'e' && c[i + 2] == 'a' && c[i + 3] == 'c' && c[i + 4] == 'h') 
      c[i] = 'a', c[i + 1] = 'p', c[i + 2] = 'p', c[i + 3] = 'l', c[i + 4] = 'e', i += 4;
  }
  printf("%s", c);
  return 0;
}
