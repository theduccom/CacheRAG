#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
  int a, b, c;
  int rec = 0, rhomb = 0;
  while(~scanf("%d,%d,%d", &a, &b, &c)) {
	if(a * a + b * b == c * c) rec++;
	else if(a == b) rhomb++;
  }
  cout << rec << endl;
  cout << rhomb << endl;
  return 0;
}