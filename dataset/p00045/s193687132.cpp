#include<iostream>
#include<cstdio>
using namespace std;

main(){
  int val,num;
  int Sval=0,Snum=0;//SvalÍÌzSnumÍÌÂ
  int n=0;//o[½£ÁÆÌ
  while(scanf("%d,%d",&val,&num) != EOF){
    
    Sval+=val*num;
    Snum+=num;
    n++;
    
  }
  
  
  cout << Sval << endl<<(int)(Snum/(double)n+0.5)<< endl;

  return 0;
}