#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  int a, b, c, s1;
  double s2;

  c = s1 = s2 = 0;

  while (scanf("%d,%d", &a, &b) != EOF){
  //while (scanf("%d,%d", &a, &b) != EOF){
    s1 += a * b;
    c++;
    s2 += b;
  }
  printf("%d\n%.0f\n", s1, (s2 + 1) / c);

  return 0;
}