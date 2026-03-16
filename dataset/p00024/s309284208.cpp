#include <iostream>
using namespace std;

int main()
{
  double v, t, y;
  int n;
  while (cin >> v){
    t = v / 9.8;
    y = 4.9 * t * t;
    for (n = 1; y > 5 * (n - 1); n++){
    }
    cout << n << endl;
  }
  return 0;
}