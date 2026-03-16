#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
  double a;
  while(cin >> a){
    double sum = a;
    for(int i = 2; i <= 10; i++){
      if(i % 2 == 0){
        a = 2 * a;
        sum += a;
      }else{
        a = a / 3;
        sum += a;
      }
    }
    printf("%.8f\n", sum);
  }
  return 0;
}