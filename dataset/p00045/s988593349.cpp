#include <cstdio>
#include <cmath>
using namespace std;

typedef long long int LLI;

int cnt;
LLI sum;
LLI total;

int main() {
  while (1) {
    LLI a, b;
    if (scanf("%lld,%lld", &a, &b) != 2) break;
    cnt++;
    sum += a*b;
    total += b;
  }

  printf("%lld\n", sum);
  printf("%d\n", (int)round(total/double(cnt)));
}