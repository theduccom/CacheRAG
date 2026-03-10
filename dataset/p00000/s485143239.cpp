#include <iostream>                                             
#include <cstdio>                                               
using namespace std;                                            
                                                                
int main(void) {                                                
  int QQ;                                                       
  for (int i=1; i<=9; i++) {                                    
    for (int j=1; j<=9; j++) {                                  
      QQ = i*j;                                                 
      printf("%dx%d=%d\n", i, j, QQ);                           
    }                                                           
  }                                                             
  return 0;                                                     
}                                                               
                             