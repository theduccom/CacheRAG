#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
  int b[3];
  for (int i = 0; i < 3; i++) {
    cin >> b[i];
  }
  if(b[2] == 1 || (b[0] == 1 && b[1] == 1)){
    std::cout << "Open" << std::endl;
  }else{
    std::cout << "Close" << std::endl;
  }
  return 0;
}