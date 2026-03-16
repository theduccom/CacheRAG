#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main (int argc, char const* argv[]) {
  int ar[11][11], N, get, sum;
  while (true) {
    // load
    cin >> N;
    if (N == 0) break;
    memset(ar, 0, sizeof ar);
    for (int i = 0; i < N; i += 1) {
      for (int j = 0; j < N; j += 1) {
        cin >> get;
        ar[i][j] = get;
      }
    }
    // calc
    for (int i = 0; i < N; i += 1) {
      int sum_h = 0, sum_v = 0;
      for (int j = 0; j < N; j += 1) {
        sum_h += ar[i][j];
        sum_v += ar[j][i];
      }
      ar[i][N] = sum_h;
      ar[N][i] = sum_v;
    }
    // sum
    sum = 0;
    for (int i=0;i<N;i++) sum += ar[i][N];
    ar[N][N] = sum;
    // print
    for (int i = 0; i <= N; i += 1) {
      for (int j = 0; j <= N; j += 1) {
        printf("%5d",ar[i][j]);
      }
      cout<<endl;
    }
  }
  return 0;
}