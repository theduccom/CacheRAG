#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main(int argc, char *argv[]){
  int n;
  while(cin >> n,n){
    int mat[n + 1][n + 1];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> mat[i][j];
      }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int hor = 0;
      int var = 0;
      for (int j = 0; j < n; j++) {
        hor += mat[i][j];
        var += mat[j][i];
      }
      mat[i][n] = hor;
      mat[n][i] = var;
      sum += hor;
    }
    mat[n][n] = sum;
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
        printf("%5d", mat[i][j]);
      }
      std::cout << std::endl;
    }
  }
  return 0;
}