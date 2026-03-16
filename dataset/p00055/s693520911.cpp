#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  double a;
  while(cin >> a) {
    double sum = a;
    for(int i=1;i<10;i++) 
      if(i % 2 == 1) a*=2, sum+=a; 
      else a/=3, sum += a;
    printf("%.10f\n",sum);
  }
  return 0;
}