#include<iostream>
using namespace std;
 
int main(void)
{
  int w=0;
  while(1){
    cin >> w;
    if(w <= -1) break;
    else{
      if(w >= 0 && w < 10){
        w = 0;
      }
      else if(w >= 10 && w < 20){
        w -=10;
        w *= 125;
      }
      else if(w >= 20 && w < 30){
        w -=20;
        w *= 140;
        w +=1250;
      }
      else if(w >= 30 && w < 40){
        w -=30;
        w *= 160;
        w += 2650;
      }
      else if(w >= 40 && w <= 100){
        w -=40;
        w *= 160;
        w += 4250;
      }
      w+= 1150;
      cout << 4280-w << endl;
    }
 
  }
}
 
 