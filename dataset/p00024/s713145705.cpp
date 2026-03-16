#include <bits/stdc++.h>
using namespace std;

int main()
{
  double v, y;

  while (cin >> v){
    int floor = 0;
    y = (v * v) / (2 * 9.8);
    for (; (floor * 5) - 5 < y; floor++);
    printf("%d\n", floor);
  }
}