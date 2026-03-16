#include<iostream>
using namespace std;


int main(){
  int w;
  while(true){
    cin >> w;
    if(w == -1)break;
    int sum = 0,pre = 4280;
    sum += 1150;
    if(w >= 10 && w <= 20)sum += (w-10)*125;
    else if(w >= 20)sum += 10*125;
    if(w >= 20 && w <= 30)sum += (w-20)*140;
    else if(w >= 30)sum += 10*140;
    if(w >= 30)sum += (w-30)*160;
    cout << pre - sum << endl;
  }
  return 0;
}