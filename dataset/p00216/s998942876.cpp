#include<stdio.h>

int main(void)
{
   while(1){
   int x=0;
   int y=0;

   scanf("%d",&x);
   if(x == -1){
    break;
   }
   if(x<=10){
        y=1150;
   } else if(10<x && x <= 20){
        
//        for(y=1150;x<=20;x++){
//        y+=125;  }
        int z = 11;
        for(y=1150;z<=x;z++){
        y+=125;  }

   } else if(20<x && x<=30){
//        for(y=1150;x<=20;x++){
//        y+=125;  }
//        for(y=1150;x<=30;x++){
//        y+=140;}
        int z = 11;
        for(y=1150;z<=20;z++){
        y+=125;  }
         for(;z<=x;z++){
        y+=140;}
 
   } else if(30<x){
         int z=11;
         for(y=1150;z<=20;z++){
        y+=125;  }
         for(;z<=30;z++){
        y+=140;}
        for(;x >= z;z++){
        y+=160;}
   } 
   printf("%d\n",4280 -y);
   }
return 0;
}