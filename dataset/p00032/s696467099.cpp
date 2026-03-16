#include<stdio.h>

int main(){
 int l1,l2,dia,rc,lc;
 rc=lc=0;
 while(scanf("%d,%d,%d",&l1,&l2,&dia)!=EOF){
  if(l1*l1+l2*l2==dia*dia){
   rc++;
  }
  if(l1==l2){
   lc++;
  }
 }
 printf("%d\n%d\n",rc,lc);
 return 0;
}