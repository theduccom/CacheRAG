#include <iostream>
using namespace std;

int main(){


  int used;
  while(1){
    cin >> used ;
    if(used == -1) break;
    int cost=0;

    if(30 < used){
      cost += 160 * (used-30);
      used = 30;
    }
    if(20 < used){
      cost += 140 * (used-20);
      used = 20;
    }
    if(10 < used ){
      cost += 125 * (used-10);
      used = 10;
    }
    if(used <= 10){
      cost += 1150;
    }


    cout << 4280 - cost << "\n";

  }


}