#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(void){
  int x, h;
  while(cin >> x){
	cin >> h;
	if(x == 0 && h == 0) break;
	printf("%.6f\n",sqrt((double)x/2 * (double)x/2 + h*h) * x * 2 + x * x);
  }
}