#include<iostream>

int main(void){
  int i,r;
  for(i=1;i<10;i++){
    for(r=1;r<10;r++){
      std::cout << i << "x" << r << "=" << i*r << std::endl;
    }
  }
  return 0;
}