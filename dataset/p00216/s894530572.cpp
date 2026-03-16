#include<bits/stdc++.h>
using namespace std;

int main(){
  
  while(1){
    
    int a;
    
    cin>>a;
    
    if(a == -1) break;
    
    if(a<=10){
      cout<<4280-1150<<endl;
    }else if(a<=20){
      cout<<4280-1150-(a-10)*125<<endl;
    }else if(a<=30){
      cout<<4280-1150-10*125-(a-20)*140<<endl;
    }else{
      cout<<4280-1150-10*125-10*140-(a-30)*160<<endl;
    }
    
  }
  return 0;
}

