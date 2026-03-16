#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int MAXN = 11;
int n;
int g[MAXN][MAXN];

int getSum(int bi, int bj, int ei, int ej) {
  int sum = 0;
  for(int i = bi; i < ei; ++i) {
    for(int j = bj; j < ej; ++j) {
      sum += g[i][j];
    }
  }
  return sum;
}

int main() {
  while(cin >> n && n) {
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < n; ++j) {
        cin >> g[i][j];
      }
    }
    for(int i = 0; i < n+1; ++i) {
      for(int j = 0; j < n+1; ++j) {
        int value = 0;
        if(i == n && j == n) {
          value = getSum(0, 0, n, n);
        } else if(i == n) {
          value = getSum(0, j, n, j+1);
        } else if(j == n) {
          value = getSum(i, 0, i+1, n);
        } else {
          value = g[i][j];
        }
        printf("%5d", value);
      }
      printf("\n");
    }
  }
  return 0;
}