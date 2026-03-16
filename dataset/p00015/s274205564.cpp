#include <stdio.h>
#include <string.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int main(void) {
  int i, ans = 0, j, n;
  char a[110], b[110];
  scanf("%d", &n);
  for(i = 0; i < n; ++i) {
    scanf("%s\n%s", a, b);
    if(strlen(a) > 80 || strlen(b) > 80) {
      printf("overflow\n");
      continue;
    }
    for(j = 0; j < strlen(a); ++j) a[j] -= '0' - 1;
    for(j = 0; j < strlen(b); ++j) b[j] -= '0' - 1;
    /*for(j = 0; j < strlen(a); ++j) printf("%d", (int)a[j] - 1);
    printf("\n");
    for(j = 0; j < strlen(b); ++j) printf("%d", (int)b[j] - 1);
    printf("\n");*/
    if(strlen(a) < strlen(b)) {
      char t[110];
      for(j = 0; j <= strlen(a); ++j) t[j] = a[j];
      for(j = 0; j <= strlen(b); ++j) a[j] = b[j];
      for(j = 0; j <= strlen(t); ++j) b[j] = t[j];
    }
    char t[110];
    int st = 0;
    for(j = 0; j <= strlen(b); ++j) t[j] = b[j];
    for(j = 0; j <= strlen(a); ++j) b[j] = 1;
    for(j = strlen(a) - strlen(t); j <= strlen(a); ++j) b[j] = t[j - strlen(a) + strlen(t)];
    /*for(j = 0; j < strlen(a); ++j) printf("%d", (int)a[j] - 1);
    printf("\n");
    for(j = 0; j < strlen(a); ++j) printf("%d", (int)b[j] - 1);
    printf("\n");*/
    for(j = strlen(a) - 1; j >= 0; --j) {
      a[j] = a[j] + b[j] - 1;
      if(a[j] >= 11) {
        if(j) {
          a[j - 1]++;
          a[j] -= 10;
        } else {
          st = 1;
          a[j] -= 10;
        }
      }
    }
    if(st) {
      if(strlen(a) == 80) {
        printf("overflow\n");
        continue;
      } else printf("1");
    }
    for(j = 0; j < strlen(a); ++j) printf("%d", (int)a[j] - 1);
    printf("\n");
  }
  return 0;
}
