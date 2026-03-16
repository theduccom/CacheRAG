#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  int sumprice = 0,sumnumber = 0,k=0,price,number;
  double ave = 0;
  while(scanf("%d,%d",&price,&number) == 2) {
    sumprice += price * number;
    sumnumber += number;
    k++;
  }
  cout << sumprice << endl;
  ave = (double)sumnumber / (double)k;
  ave += 0.5;
  ave = floor(ave);
  cout << ave << endl;
}