#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  double maxh = -1, minh = 999999999;
  double h;

  while(cin >> h){
    maxh = max(maxh, h);
    minh = min(minh, h);
  }

  printf("%.10f\n", maxh - minh);
}