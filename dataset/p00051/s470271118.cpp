#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char s[15], t;
  long long i, j, k, n;
  scanf("%lld", &n);
  for(i = 0; i < n; ++i) {
    long long min, max;
    scanf("%s", s);
    for(j = 0; j < 8; ++j) for(k = j + 1; k < 8; ++k) if(s[j] > s[k]) t = s[j], s[j] = s[k], s[k] = t;
    min = atoll(s);
    for(j = 0; j < 8; ++j) for(k = j + 1; k < 8; ++k) if(s[j] < s[k]) t = s[j], s[j] = s[k], s[k] = t;
     max = atoll(s);
     printf("%lld\n", max - min);
  }
}
