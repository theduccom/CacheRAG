#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int a,b,c;
int main(void){
 cin>>a>>b>>c;
 if(a==1){
  if(b==1){cout<<"Open"<<endl;}
  else{cout<<"Close"<<endl;}
 }
 else{
  if(c==1){cout<<"Open"<<endl;}
  else{cout<<"Close"<<endl;}
 }
 return 0;
}