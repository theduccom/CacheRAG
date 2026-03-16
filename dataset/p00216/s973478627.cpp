#include<iostream>
using namespace std;
main(){
  int w,now=1150;
  while(1){
    now=1150;
    cin>>w;
    if(w==-1){
      break;
    }
    if(w<=10){
    }
    else if(w>10&&w<=20){
      now+=(w-10)*125;
    }
    else if(w>20&&w<=30){
      now+=1250+(w-20)*140;
    }
    else{
      now+=1250+1400+(w-30)*160;
    }
    cout<<4280-now<<endl;
  }
}