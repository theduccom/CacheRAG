#include<stdio.h>
 double x[22]; 
double y[22];
 int main(){ 
double a,b; 
int now=1; 
while(~scanf("%lf,%lf",&a,&b)){ x[now]=a;
 y[now++]=b; } x[0]=x[now-1];
 x[now]=x[1];
 double S=0; 
for(int i=1;i<now;i++){ S+=(x[i+1]-x[i-1])*y[i];
 } 
if(S<0)S=-S; 
printf("%.8lf",S/2.0); 

} 
