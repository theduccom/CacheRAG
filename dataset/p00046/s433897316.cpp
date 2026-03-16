#include<iostream>
#include<cstdio>
using namespace std;

main(){
  double moun=0;
  double  max = 0;
  double  min = 100000;
  while(cin >> moun){
    
    if(moun >= max)max = moun;
    if(moun <= min)min = moun;

  }
  printf("%.1f\n",(max - min));
  
}