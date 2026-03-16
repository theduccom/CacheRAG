#include <iostream>
using namespace std;

int uruu(int i){
  if(i%4!=0)return 0;
  else if(i%400==0)return 1;
  else if(i%100==0)return 0;
  return 1;
}

int main(){
  int a,b,k=11111;
  while(1){
    cin>>a>>b;
    if(a==0)break;
    if(k!=11111)cout<<endl;
    k=0;
    for(int i=a;i<=b;i++){
      if(uruu(i)){k++;cout<<i<<endl;}
      
    }
    if(k==0)cout<<"NA"<<endl;
  }
  return 0;
}