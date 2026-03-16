#include<iostream>

int main(){
  int i;
  double v,t,h;

  while(std::cin >> v){
    t = v / 9.8;
    h = 4.9 * t * t;
    for(i=2;h>5.0;i++){
      h -= 5.0;
    }
    std::cout << i << std::endl;
  }
}