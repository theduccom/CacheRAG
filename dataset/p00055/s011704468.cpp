#include <iostream>
#include <stdio.h>
 
using namespace std;
 
double i_1;
 
double s_n;
 
double fib(int i){
 
  if(i == 0 )
  {
    return i_1;
  }
 
  //偶数番目
  if((i + 1) % 2 == 0){
    return fib(i-1)*2.0;
  }else{
    return fib(i-1)/3.0;
  }
}
 
int main(void){
 
     
  while(scanf("%lf", &i_1) != EOF)
  {
 
      for(int i = 0; i < 10; i++)
      {
        s_n += fib(i);
        if(i == 9)
        {
          printf("%lf\n", s_n);
        }
      }
      s_n = 0;
  }
 
  return 0;
}
