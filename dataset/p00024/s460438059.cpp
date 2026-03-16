#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double n;
  double t, y, x;
  while(cin >> n){
    t = n / 9.8;
    y = 4.9 * t * t;
    x = (y + 5) / 5;
    
    if(x > ceil(x) - 1){
      cout << ceil(x) << endl;
    }
    else{
      cout << x << endl;
    }
  }
  return 0;
}