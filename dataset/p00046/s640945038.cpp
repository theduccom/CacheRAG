#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
  double highest = 0.0, lowest = 1.797693e+308, now;
  while(cin >> now){
    if(now > highest) highest = now;
    else if(now < lowest) lowest = now;
  }
  printf("%.1f\n", highest - lowest);
  return 0;
}