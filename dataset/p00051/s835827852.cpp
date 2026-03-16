#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  for (int I = 0; I < N; I++) {
    char s[16];
    int a, i;
    scanf("%s", s);
    sort(s, s+8);
    sscanf(s, "%d", &i);
    reverse(s, s+8);
    sscanf(s, "%d", &a);
    printf("%d\n", a - i);
  }
  return 0;
}