#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

#define REP(i,N) for(int i=0;i<(int)(N);++i)

typedef long long Int;

int main()
{
  Int sum = 0;
  Int u, n;
  Int x = 0;
  int c = 0;
  while (~scanf("%lld, %lld", &u, &n)) {
      sum += u * n;
      x += n;
      c++;
  }
  printf("%lld\n", sum);
  printf("%.0f\n", (double)x / c + 0.0000001);
  return 0;
}