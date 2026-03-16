#include<iostream>
using namespace std;

int main(void){
  while(1){
    int all;
    cin >> all;
    if(all == -1) break;
    else{
      if(all < 10){
        all =0;
      }
      if(all >=10 && all < 20){
        all -= 10;
        all *= 125;
      }else if(all >= 20 && all < 30){
        all -= 20;
        all *= 140;
        all +=1250; 
      }else if(all >= 30 && all <= 100){
        all -=30;
        all *= 160;
        all += 1250 + 1400;
      }
      all += 1150;
      cout << 4280 - all << endl;
    }
  }
}