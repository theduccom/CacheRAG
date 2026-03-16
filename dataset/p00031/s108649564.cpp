#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  int a[10];
  int n;

  while (cin >> n){
    for (int i = 0; i <= 9; i++){
      a[i] = 0;
    }

    for (int i = 9; i >= 0; i--){
      if (n >= pow(2, i)){
        n -= pow(2, i);
        a[i]++;
      }
    }
    for (int i = 0; i <= 9; i++){
      if (a[i] == 1){
        cout << (int)pow(2, i);
        for (int j = i + 1; j <= 9; j++){
          if (a[j] == 1){
            cout << " " << (int)pow(2, j);
          }
        }
        cout << endl;
        break;
      }
    }
  }
  return 0;
}