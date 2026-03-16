#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

int main(){
  double x, h, s;

  while(1){
    cin >> x >> h;
    if(x == 0 && h == 0) break;

    s = x*x + 2*x*sqrt(h*h + (x/2)*(x/2));

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(6);
    cout << s << endl;
  }

  return 0;
}