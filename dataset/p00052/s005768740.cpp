#include<stdio.h>

int main(void)
{
   int n;
   int ans;

   while(1){
      scanf("%d",&n);
      if(n==0)break;
      ans=0;
      while(n>4){//5,25,125,…,5^nが何回かけられたかを数える
         ans+=n/5;
         n/=5;
      }
      printf("%d\n",ans);
   }
   return 0;
}