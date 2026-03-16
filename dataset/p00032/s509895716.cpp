#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void) {
  int dia=0, rect=0;
  int side1, side2, diagonal;
  char c1, c2;

  while(cin >> side1 >> c1 >> side2 >> c2 >> diagonal) {
    if(diagonal * diagonal == side1*side1 + side2*side2) rect++;
    else if(side1 == side2 ) dia++;
  }
  cout << rect << endl << dia << endl;
  return 0;
}