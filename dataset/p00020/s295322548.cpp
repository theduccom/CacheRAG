#include <stdio.h>
#include <string.h>

int main(){
  char s[1024];
  fgets(s, 1024, stdin);

  for(int i=0;i<strlen(s);i++)
    if('a' <= s[i] && s[i] <= 'z')
      s[i] += 'A'-'a';

  printf("%s", s);
}