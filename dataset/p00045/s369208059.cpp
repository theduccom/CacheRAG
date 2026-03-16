#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  int a, b, sum = 0, i = 0;
  int c = 0;
  while (scanf("%d,%d", &a, &b) != EOF){
    sum += a * b;
    i++;
    c += b;
  }
  printf("%d\n%d\n", sum,(c + 1) / i);
  return (0);
}