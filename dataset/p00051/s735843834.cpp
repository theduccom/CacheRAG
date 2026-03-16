#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  
  scanf("%d", &n);
  while (n--){
    int num[8];
    for (int i = 0; i < 8; i++){
      scanf("%1d", &num[i]);
    }

    int num_max = 0, num_min = 0;
    sort(num, num + 8);
    for (int i = 0; i < 8; i++){
      num_min += num[i] * (int)pow(10, 7 - i);
      num_max += num[i] * (int)pow(10, i);
    }

    printf("%d\n", num_max - num_min);
  }

  return (0);
}