#include <cstdio>

using namespace std;

int main(){
  int n, s1, s2, d, rect = 0, dia = 0;
  while (scanf("%d,%d,%d", &s1, &s2, &d) != EOF) {
    if (s1 * s1 + s2 * s2 == d * d) rect++;
    if (s1 == s2) dia++;
  }
  printf("%d\n%d\n", rect, dia);
  return 0;
}