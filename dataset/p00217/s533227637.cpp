#include<stdio.h>

int main(){

int x,y,z,N,p;
int max=0,sum=0;

while(1){
scanf("%d",&N);if(N==0)break;
for(int i=0;i<N;i++){
scanf("%d %d %d",&p,&x,&y);
if(max<x+y){max=x+y;sum=p;}
}
printf("%d %d\n",sum,max);
sum=0;max=0;
}
return 0;
}