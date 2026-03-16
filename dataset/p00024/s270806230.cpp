#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  double v, time, y, height;

  while(scanf("%lf", &v) != EOF){
    time = v / 9.8;
    y = 4.9 * time * time;
    height = (y + 5) / 5;

    if(height > int(height)){
      height = int(height) + 1;
    }

    printf("%d\n", int(height));
  }

  return 0;
}