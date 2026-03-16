#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int field[100][100];
  int n,x;
  while (cin >> n) {
    if(n == 0) break;
    int field[100][100] = {0};
    for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
        cin >> x;
        field[i][j] = x;
      }
    }
    for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
        field[i][n] += field[i][j];
      }
    }
    for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
        field[n][i] += field[j][i];
      }
    }
    for(int i=0;i<n;i++) {
      field[n][n] += field[i][n];
    }
    for(int i=0;i<n+1;i++) {
      for(int j=0;j<n+1;j++) {
        printf("%5d",field[i][j]);
      }
      cout <<  endl;
    }
  }
}