#include<iostream>
using namespace std;
int fee[] = {0, 125, 140, 160};

int calc(int w){
  int res = 1150;
  if(10 < w && w <= 20){
    return res + (w - 10)*125;
  }else if(20 < w && w <= 30){
    return res + 1250 + (w - 20)*140;
  }else if(30 < w){
    return res + 1250 + 1400 + (w - 30)*160;
  }else{
    return res;
  }
}

int main(int argc, char *argv[]){
  int fee = 0, w;
  while(cin >> w){
    if(w == -1)break;
    std::cout << 4280 - calc(w) << std::endl;
  }
  return 0;
}