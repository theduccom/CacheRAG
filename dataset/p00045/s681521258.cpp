#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int a, b;
  int sum = 0, ave = 0, cnt = 0;
  while (scanf("%d,%d", &a, &b) != EOF){
    sum += a * b;
    ave += b;
    cnt++;
  }
  ave = ave * 10 / cnt;
  if (ave % 10 >= 5)  ave += 10 - ave % 10;
  cout << sum << "\n" << ave / 10 << endl;
}