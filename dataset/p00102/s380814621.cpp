#include <cstdio>
using namespace std;

int n;
int field[1000][1000];
int total;

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;

    total = 0;
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        scanf("%d", &field[i][j]);
        total += field[i][j];
      }
    }

    for (int i=0; i<n; i++) {
      int sum = 0;
      for (int j=0; j<n; j++) {
        sum += field[i][j];
      }
      field[i][n] = sum;
    }
    field[n][n] = total;

    for (int j=0; j<n; j++) {
      int sum = 0;
      for (int i=0; i<n; i++) {
        sum += field[i][j];
      }
      field[n][j] = sum;
    }

    for (int i=0; i<n+1; i++) {
      printf("%5d", field[i][0]);
      for (int j=1; j<n+1; j++) {
        printf("%5d", field[i][j]);
      }
      puts("");
    }
  }
}