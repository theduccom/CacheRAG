#include <bits/stdc++.h>
using namespace std;

int main()
{
  char field[8][8];

  while (cin >> field[0]){
  
    for (int j = 1; j < 8; j++){
      cin >> field[j];
    }
  
  
    bool judge = false;
    for (int i = 0; i < 8; i++){
      for (int j = 0; j < 8; j++){
        if (field[i][j] == '1'){
          if (field[i + 3][j] == '1'){
            cout << 'B';
          }
          else if (field[i][j + 3] == '1'){
            cout << 'C';
          }
          else if (field[i + 2][j - 1] == '1'){
            cout << 'D';
          }
          else if (field[i + 1][j + 2] == '1'){
            cout << 'E';
          }
          else if (field[i + 2][j + 1] == '1'){
            cout << 'F';
          }
          else if (field[i + 1][j - 1] == '1'){
            cout << 'G';
          }
          else {
            cout << 'A';
          }
          judge = true;
        }
        if (judge)  break;
      }
      if (judge)  break;
    }
    cout << endl;
  }
}