#include<iostream>
using namespace std;
int main(){
  double a,b,c;
  while(cin>>a){
    b=0;int s=0; 
    while(1){if(9.8*b>=a)break;b+=0.0000001;}
    while(1){
      if(4.9*b*b<=s)break;
      s+=5;
    }cout<<s/5+1<<endl;
  }
}