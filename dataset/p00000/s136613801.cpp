#include<stdio.h>
int main(){int i=1,j=1;while(i<10)(j%=10)?printf("%dx%d=%d\n",i,j,i*j),j++:(i++,j++);}