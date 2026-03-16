#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
  double heights[50];

  int i = 0;
  while(cin >> heights[i]) {
    i++;
  }

  double min_f = *min_element(heights, heights + i);
  double max_f = *max_element(heights, heights + i);

  printf("%.6lf\n", max_f - min_f);

  return 0;
}