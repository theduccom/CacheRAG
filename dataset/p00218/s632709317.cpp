#include <iostream>
using namespace std;

int main()
{
  int n;
  while (cin >> n && n != 0){
    while (n--){
      int a, b, c;
      cin >> a >> b >> c;
      if (a == 100 || b == 100 || c == 100){
        cout << 'A' << endl;
        continue;
      }
      if (a + b >= 180){
        cout << 'A' << endl;
        continue;
      }
      if (a + b + c >= 240){
        cout << 'A' << endl;
        continue;
      }
      if (a + b + c >= 210){
        cout << 'B' << endl;
        continue;
      }
      if (a + b + c >= 150 && (a >= 80 || b >= 80)){
        cout << 'B' << endl;
        continue;
      }
      cout << 'C' << endl;
    }
  }
}