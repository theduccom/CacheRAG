#include<stdio.h>
main(){int i,j,k;for(i=0;i<81;i++)j=i/9+1,k=i%9+1,printf("%dx%d=%d\n",j,k,j*k);}