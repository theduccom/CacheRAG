#include <iostream>
using namespace std;


int main(){
  while(true){
    int n,much=0;
    cin>>n;
    if(n==-1){
      break;
    }
    much=much+1150;
    if(20>=n&&n>10){
      much=(n-10)*125+much;
    }
    if(30>=n&&n>20){
      much=(n-20)*140+much+1250;
    }
    if(n>30){
      much=(n-30)*160+much+1250+1400;
    }
    cout<<4280-much<<endl;
  }

  return 0;
}