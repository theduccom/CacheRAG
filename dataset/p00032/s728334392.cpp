#include<iostream>
#include<cstdio>

int main(){
  int a,b,c;
  int Rec=0,Dia=0;

  while(std::scanf(" %d,%d,%d",&a,&b,&c)+1){
    if(a*a+b*b==c*c){
      Rec++;
    }
    if(a==b){
      Dia++;
    }
  }
  std::cout << Rec << std::endl;
  std::cout << Dia << std::endl;
}