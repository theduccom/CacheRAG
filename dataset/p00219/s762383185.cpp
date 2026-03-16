#include <iostream>
using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0){
    int a[10];
    for (int i = 0; i < 10; i++) a[i] = 0;
    for (int i = 0; i < n; i++){
      int s;
      cin >> s;
      a[s]++;
    }
    for (int i = 0; i < 10; i++){
      if (a[i] == 0){
        cout << '-';
      }
      while (a[i]--){
        cout << '*';
      }
      cout << endl;
    }
  }
}