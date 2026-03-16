#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
  int s1, s2, dg, rec = 0, rho = 0;
  while(scanf("%d,%d,%d", &s1, &s2, &dg) != EOF){
    if(s1 * s1 + s2 * s2 == dg * dg) rec++;
    else if(s1 == s2) rho++;
  }
  cout << rec << endl << rho << endl;
  return 0;
}