#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    int matrix[n + 1][n + 1];
    for (int i = 0; i < n + 1; ++i) for (int j = 0; j < n + 1; ++j) matrix[i][j] = 0;
    
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
	cin >> matrix[i][j];
	matrix[i][n] += matrix[i][j];
	matrix[n][j] += matrix[i][j];
      }
    }
    
    for (int i = 0; i < n; ++i) matrix[n][n] += matrix[n][i];
    
    for (int i = 0; i < n + 1; ++i) {
      for (int j = 0; j < n + 1; ++j) {
	printf("%5d", matrix[i][j]);
      }
      printf("\n");
    }
  }
}