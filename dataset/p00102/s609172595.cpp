#include <iostream>
using namespace std;
int main(void) {
  int n;
  int data[100][100];

  while(1) {
    cin >> n;
    if(n == 0) break;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
	cin >> data[i][j];
      }
    }

    data[n][n] = 0;
    for(int i = 0; i < n; i++) {
      data[i][n] = 0;
      for(int j = 0; j < n; j++) {
	data[i][n] += data[i][j];
      }
      data[n][n] += data[i][n];
    }
    for(int j = 0; j < n; j++) {
      data[n][j] = 0;
      for(int i = 0; i < n; i++) {
	data[n][j] += data[i][j];
      }
    }
    
    for(int i = 0; i <= n; i++) {
      for(int j = 0; j <= n; j++) {
	printf("%5d", data[i][j]);
      }
      cout << endl;
    }
  }
  return 0;
}