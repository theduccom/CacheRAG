#include <iostream>
using namespace std;

int main(){
  int water ,lastmonth=4280 ,price=1150;
  while( true ){
    price = 1150;
    cin >> water;
    if( water == -1 ){
      break;
    }

    for(int i = 11 ; i <= water && i <= 20 ; i++ ){
      price += 125;
    }
    for(int i = 21 ; i <= water && i <= 30 ; i++ ){
      price += 140;
    }
    for(int i = 31 ; i <= water ; i++ ){
      price += 160;
    }
    cout << lastmonth - price << endl;
  }
}