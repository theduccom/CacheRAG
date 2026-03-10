#include<stdio.h>
int i,j,k;main(){for(;i<81;i++)j=i/9+1,k=i%9+1,printf("%dx%d=%d\n",j,k,j*k);}