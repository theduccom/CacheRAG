#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  int data[11][11];
  while (true) {
    cin >> n;
    if (n == 0)
      break;
    memset(data, 0, sizeof(int) * 11 * 11);
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        cin >> data[i][j];

    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        data[n][i] += data[j][i];
    for (int i = 0; i < n+1; i++)
      for (int j = 0; j < n; j++)
        data[i][n] += data[i][j];

    for (int i = 0; i < n+1; i++) {
      for (int j = 0; j < n+1; j++)
        printf("%5d", data[i][j]);
      printf("\n");
    }
  }
  return 0;
}