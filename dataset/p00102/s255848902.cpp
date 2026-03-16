#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
  while (true) {
    int n;
    scanf("%d", &n);
    if (n == 0) { break; }

    vector<vector<int>> matrix;
    for (int i = 0; i < n; ++i) {
      matrix.emplace_back(vector<int>(n));
      for (int j = 0; j < n; ++j) { scanf("%d", &matrix[i][j]); }
    }

    vector<int> col_sums(n);
    for (const auto& row : matrix) {
      int row_sum = accumulate(row.cbegin(), row.cend(), 0);
      for (int i = 0; i < n; ++i) {
        printf("%5d", row[i]);
        col_sums[i] += row[i];
      }
      printf("%5d\n", row_sum);
    }
    for (const auto elm : col_sums) { printf("%5d", elm); }
    printf("%5d\n", accumulate(col_sums.cbegin(), col_sums.cend(), 0));
  }

  return 0;
}