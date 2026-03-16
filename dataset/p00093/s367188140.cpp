#include<iostream>
using namespace std;

bool isUruu(int y){
  if(y%4)return false;
  if(y%100)return true;
  if(y%400)return false;
  return true;  
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