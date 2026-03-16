#include<iostream>
#include<cstdio>

using namespace std;

int main(void){
  int w,costs=4280;
  while(scanf("%d",&w) && w+1){
    costs=4280;
    do{
      if(w<=10){
	w=0;
	costs-=1150;
      }else if(w<=20){
	costs-=(w-10)*125;
	w=10;
      }else if(w<=30){
	costs-=(w-20)*140;
	w=20;
      }else{
	costs-=(w-30)*160;
	w=30;
      }
    }while(w>0);
    cout<<costs<<endl;
  }
  return 0;
}