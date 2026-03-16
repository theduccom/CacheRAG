#include <iostream>
using namespace std;

int main()
{
  int n;

  while (cin >> n, n){
    int num[10], m;
    for (int i = 0; i < 10; i++)  num[i] = 0;
    for (int i = 0; i < n; i++){
      cin >> m;
      num[m]++;
    }
    for (int i = 0; i < 10; i++){
      if (num[i] == 0)  cout << '-' << endl;
      else {
        for (int j = 0; j < num[i]; j++){
          cout << '*';
        }
        cout << endl;
      }
    }
  }
  return (0);
}