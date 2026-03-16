#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  double a;

  while(cin >> a){
    double sum = a;

    for(int i = 2; i <= 10; i++){
      double b;
      if(i % 2 == 0) b = a * 2;
      else           b = a / 3;
      sum += b;
      a = b;
    }

    printf("%.10f\n", sum);
  }
}