#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int n, A[4];
  fill(A, A + 4, 0);
  char b[10];
  while (scanf("%d,%s ", &n, b) == 2) {
    if (b[0] == 'A') {
      if (b[1] == 'B') {
	A[2]++;
      } else {
	A[0]++;
      }
    } else if (b[0] == 'B') {
      A[1]++;
    } else if (b[0] == 'O') {
      A[3]++;
    }
  }
  for (int i = 0; i < 4; i++) {
    printf("%d\n", A[i]);
  }
  return 0;
}