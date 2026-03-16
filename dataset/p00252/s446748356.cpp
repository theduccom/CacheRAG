#include<iostream>
using namespace std;

int main(){
  int b1,b2,b3;
  cin>>b1>>b2>>b3;
  if(b1==1){
    if(b2==0){
      cout<<"Close"<<"\n";
    }
    else{
      cout<<"Open"<<"\n";
    }
  }
  else{
    if(b3==1){
      cout<<"Open"<<"\n";
    }
    else{
      cout<<"Close"<<"\n";
    }
  }
  return 0;
}

