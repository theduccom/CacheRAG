#include <iostream>
using namespace std;
#include <iomanip>

int main() {
  int n;
  while (cin >> n) {
    if (n == 0) break;
    int mat[n+1][n+1];
    for (int i = 0; i < n; i++) {
      mat[i][n] = 0;
      for (int j = 0; j < n; j++) {
	cin >> mat[i][j];
	mat[i][n] += mat[i][j];
      }
    }
    for (int i = 0; i < n+1; i++) {
      mat[n][i] = 0;
      for (int j = 0; j < n; j++) {
	mat[n][i] += mat[j][i];
      }
    }
    for (int i = 0; i < n+1; i++) {
      for (int j = 0; j < n+1; j++) {
	cout << right << setw(5) << mat[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}
