#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;

  while(cin >> n,n){

    int sheet[n + 1][n + 1];

    memset(sheet, 0, sizeof(sheet));

    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){

        cin >> sheet[i][j];
        printf("%5d", sheet[i][j]);
        sheet[i][n] += sheet[i][j];

      }

      printf("%5d\n", sheet[i][n]);

    }

    for(int i = 0; i < n + 1; ++i){
      for(int j = 0; j < n; ++j){

        sheet[n][i] += sheet[j][i];

      }

      printf("%5d", sheet[n][i]);

    }

    cout << endl;

  }

}