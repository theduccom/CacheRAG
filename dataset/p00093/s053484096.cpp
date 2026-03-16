#include<iostream>
using namespace std;

bool isUruu(int y){
  if(y%4 == 0){
    if(y%100 == 0){
      if(y%400 == 0)return true;
      return false;
    }
    return true;
  }
  return false;
}

int main(){
  int a, b;
  bool first = false;
  while(std::cin >> a >> b, a){
    if(first)std::cout << std::endl;
    first = true;
    bool flag = false;
    for (int i = a; i <= b; i++) {
      if(isUruu(i)){
        std::cout << i << std::endl;
        flag = true;
      }
    }
    if(flag == false)std::cout << "NA" << std::endl;
  }
  return 0;
}