#include<stdio.h>

int main(){
 int kiro,s,ksum,ssum,n;
 double h;
 ksum=ssum=n=0;
 while(scanf("%d,%d",&kiro,&s)!=EOF){
  ksum+=kiro*s;
  n++;
  ssum+=s;
 }
 h=(double)ssum/(double)n;
 if((h-(double)((int)h))>=0.5) s=(int)h+1;
 else s=(int)h;
 printf("%d\n%d\n",ksum,s);
 return 0;
}