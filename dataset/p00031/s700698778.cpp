#include<iostream>
#include<cmath>

int main(){
  int w,flag;
  int b[10]={0};

  while(std::cin >> w){
    for(int i=0;i<10;i++){
      b[i] = 0;
    }
    for(int i=9;i>=0;i--){
      if(w>=std::pow(2,i)){
        w = w - std::pow(2,i);
        b[i] = 1;
      }
    }
    flag = 1;
    for(int i=0;i<10;i++){
      if(flag&&b[i]){
        std::cout << std::pow(2,i);
        flag = 0;
        continue;
      }
      if(b[i]){
        std::cout << ' ' << std::pow(2,i);
      }
    }
    std::cout << std::endl;
  }
}