#include <iostream>
#include <cstdio>
using namespace std;

#define EPS 10e-8

int main(void){
  int s[10], v[2];
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",s,s+1,s+2,s+3,s+4,s+5,s+6,s+7,s+8,s+9,v,v+1) != EOF){
    for(int i = 1; i < 10; i++) s[i] += s[i-1];
    double x = (1.0 * v[0] * s[9]) / (v[0] + v[1]);
    for(int i = 0; i < 10; i++){
      if(x <= s[i] + EPS){
        cout << i + 1 << endl;
        break;
      }
    }
  }
  return 0;
}