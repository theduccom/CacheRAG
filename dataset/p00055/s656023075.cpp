#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  double a[10];
  while (cin >> a[0]){
    double sum = a[0];
    FOR(i, 1, 10){
      a[i] = 0;
      if (i % 2 == 1) a[i] = a[i - 1] * 2;
      else a[i] = a[i - 1] / 3;
      sum += a[i];
    }
    printf("%.8f\n", sum);
  }
}