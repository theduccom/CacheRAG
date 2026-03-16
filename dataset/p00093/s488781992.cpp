#include <stdio.h>
  int main(){
	   int a,b;
	  scanf("%d%d",&a,&b);
while(1){
int i,sum=0;
for(i=a;i<=b;i++){
if(i%400==0){
printf("%d\n",i); sum++;
}else if(i%100==0){
continue;
}else if(i%4==0){
printf("%d\n",i);sum++;
}}
if(sum==0) printf("NA\n");
sum=0;
scanf("%d%d",&a,&b);
if(a==0 && b==0) break;
printf("\n");
}
return 0;
}