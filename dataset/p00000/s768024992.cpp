/*
 * ITP1_1_D.c
 *
 *  Created on: 2017/05/11
 *      Author: sl2-user
 */
#include<stdio.h>

int main(void){
int i , j ;
for (i=1;i<10;i++){
   for(j=1;j<10;j++){
      printf("%dx%d=%d\n",i,j,i*j);
      }
   }
return 0;
}