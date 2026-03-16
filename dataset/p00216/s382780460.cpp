#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int main(void){
  while(1){
    int w,c=1150;
    cin >> w;
    if(w == -1)break;
    w -= 10;
    c += max(0,min(w,10)) * 125;
    w -= 10;
    c += max(0,min(w,10)) * 140;
    w -= 10;
    c += max(0,w) * 160;
    cout << 4280 - c << endl;
  }
}