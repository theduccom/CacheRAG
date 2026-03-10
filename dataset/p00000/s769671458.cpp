#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
 int i, j;
 for(i = 1;i < 10;i++){
  for(j = 1; j < 10;j++){
    printf("%dx%d=%d\n",i,j,i*j);
  }
 }

 return 0; 
}