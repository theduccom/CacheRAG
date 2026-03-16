#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
  int a=0,b=0,c=0;
  int counter[2]={0};

  while((scanf("%d,%d,%d",&a,&b,&c))!=EOF){
    
    if(a*a + b*b == c*c)
      counter[0]++;
    if(a == b)
      counter[1]++;
  }

  printf("%d\n%d\n",counter[0],counter[1]);

  return 0;

}  

  
    