#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double min;
  double t,y;
  int i;

  while( cin>>min ){
    t = min/9.8;
    y = 4.9*t*t;

    i=0;
    while( y > 5*i-5 ) i++;
    cout << i << endl;
  }

  return 0;
}