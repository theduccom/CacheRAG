#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  scanf("%d ", &N);
  for (int i = 0 ;i < N; i++) {
    char num[8];
    for (int j = 0; j < 8; j++) {
      scanf("%c ", &num[j]);
      num[j] = num[j] - '0';
    }
    vector<int> v(8);
    for (int j = 0; j < 8; j++) {
      v[j] = j;
    }
    int mx = -1, mn = 100000000;
    do {
      int n = 0;
      for (int j = 0; j < 8; j++) {
	n = n * 10 + num[v[j]];
      }
      //printf("%d\n", n);
      mx = max(n, mx);
      mn = min(n, mn);
    } while (next_permutation(v.begin(), v.end())); 
    printf("%d\n", mx - mn);
  }

  return 0;
}