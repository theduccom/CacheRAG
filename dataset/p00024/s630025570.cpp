#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  double v;

  while (~scanf("%lf", &v)){
    int i = 1;
    while (1){
      if ((v / 9.8) * (v / 9.8) * 4.9 <= 5 * i - 5){
        printf("%d\n", i);
        break;
      }
      i++;
    }
  }

  return (0);
}