#include <iostream>
using namespace std;
char g[8][8];

void solve(int a, int b) {
  g[a][b] = '0';
  for(int i = 1; i <= 3; i++) {
    if(a+i < 8 && g[a+i][b] == '1') {
      g[a+i][b] = '0';
      solve(a+i, b);
    }
    if(a-i >= 0 && g[a-i][b] == '1') {
      g[a-i][b] = '0';
      solve(a-i, b);
    }
    if(b+i < 8 && g[a][b+i] == '1') {
      g[a][b+i] = '0';
      solve(a, b+i);
    }
    if(b-i >= 0 && g[a][b-i] == '1') {
      g[a][b-i] = '0';
      solve(a, b-i);
    }
  }
}

int main() {
  int n, X, Y;
  int k = 0;

  cin >> n;

  while(n > k) {
    for(int i = 0; i < 8; i++) {
      for(int j = 0; j < 8; j++) {
        cin >> g[i][j];
      }
    }
    cin >> X >> Y;
    X--; Y--;

    solve(Y, X);

    cout << "Data " << (k+1) << ':' << endl;
    for(int i = 0; i < 8; i++) {
      for(int j = 0; j < 8; j++) {
        cout << g[i][j];
      }
      cout << '\n';
    }
    k++;
  }

  return 0;
}

