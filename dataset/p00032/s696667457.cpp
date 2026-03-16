#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int chou=0,hisi=0;
  int x1,x2,x3;

  while(scanf("%d,%d,%d", &x1,&x2,&x3) == 3) {
    if(x3 * x3 == x1*x1 + x2*x2)
      chou++;
    if(x1 == x2)
      hisi++;
  }
  cout << chou << endl << hisi << endl;

}