#include<iostream>
using namespace std;
int main(){

  int w,ryoukin;

  while(1){
    
    cin >>w;

    if(w == -1)break;
    
    ryoukin=1150;
    
    if(w > 30){
      ryoukin+=(w-30)*160;
      w=w-(w-30);
    }
    if(w > 20){
      ryoukin+=(w-20)*140;
      w=w-(w-20);
    }
    if(w > 10){
      ryoukin+=(w-10)*125;
    }
    
    cout <<4280-ryoukin<<endl;

  }
  return 0;
}